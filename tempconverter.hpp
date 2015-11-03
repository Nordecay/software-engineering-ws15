#ifndef TEMPCONVERTER_HPP
#define TEMPCONVERTER_HPP

#include "converter.hpp"

class TempConverter : public converter
{
public:
	TempConverter(){}

	virtual double convert(double input) = 0;
	TempConverter(std::shared_ptr<converter> decorator_weight) : converter{ decorator_weight }{}

};


#endif //TEMPCONVERTER_HPP