#ifndef Command_PATTERN_HPP
#define Command_PATTERN_HPP

#include <iostream>
#include <string>
#include <sstream>

#include "helper.hpp"

class Command
{
public:
	Command(std::string const& cmd_in)
	{
		auto items = split(cmd_in, " ", false);

		std::string command = items[0];
		std::string strValue = items[1];
	
		auto factory = Singleton<FactoryPattern>::getInst();
		conv = factory->create(command);	


		if (strValue != "")
			value = converter::ToDouble(strValue);
		else
			value = 0.0;
	}

	bool exec()
	{
		if (conv != nullptr)
		{
			double converted_value = conv->convert(value);
			std::cout << conv->toString() << " : " << converted_value << std::endl;

			return true;
		}

		return false;
	}

	std::shared_ptr<converter> conv;
	double value;


};



#endif 