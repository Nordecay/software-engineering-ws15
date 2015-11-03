#include "converter.hpp"

#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "metertofootconverter.hpp"
#include "foottometerconverter.hpp"
#include "celciustofahrenheitconverter.hpp"
#include "fahrenheittocelciusconverter.hpp"
#include "ouncestogrammconverter.hpp"
#include "grammtoouncesconverter.hpp"

#include "Factory.hpp"

#include "singleton.hpp"

#include "command_Pattern.hpp"
#include "inverse.hpp"

#include <deque>

/*

int main(int argc, char* argv[])
{
	// ********** PART 1 *********

	std::cout << "Inverse Example:" << std::endl;
	std::cout << "================" << std::endl;


	auto factory = Singleton<FactoryPattern>::getInst();

	auto conv = factory->create("MeterToFoot");
	std::cout << conv->toString() << ": " << conv->convert(199) << std::endl;

	auto inverse = Inverse(conv);
	std::cout << inverse.toString() << ": " << inverse.convert(200) << std::endl << std::endl;





	// ********** PART 2 *********
	std::cout << "Commands:" << std::endl;
	std::cout << "=========" << std::endl;

	std::deque<Command> commands;

	std::cout << "Enter commands (example: \"MeterToFoot 500\" separated by line break) - Press Ctrl-D to exit" << std::endl;

	for (std::string line; std::getline(std::cin, line);)
	{
		//CTRL-D
		if ((int)line[0] == 4)
			break;

		commands.push_back(Command(line));
	}

	for (auto it = commands.begin(); it != commands.end(); ++it)
		it->exec();

	return 0;


}
*/