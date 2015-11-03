#ifndef WEIGHTCONVERTER_HPP
#define WEIGHTCONVERTER_HPP

#include "converter.hpp"


class WeightConverter : public converter
{
public:
	WeightConverter(){}

	virtual double convert(double input) = 0;
	WeightConverter(std::shared_ptr<converter> decorator_weight) : converter{ decorator_weight }{}
	
};


#endif //WEIGHTCONVERTER_HPP