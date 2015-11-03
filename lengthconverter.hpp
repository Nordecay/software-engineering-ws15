#ifndef LENGTHCONVERTER_HPP
#define LENGTHCONVERTER_HPP
	
#include "converter.hpp"

class LengthConverter : public converter
{
public:
	LengthConverter(){}

	virtual double convert(double input) = 0;
	LengthConverter(std::shared_ptr<converter> decorator_length) : converter{ decorator_length } {}

};


#endif 