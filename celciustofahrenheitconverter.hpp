#ifndef CELCIUSTOFAHRENHEIT_H
#define CELCIUSTOFAHRENHEIT_H

//#include "converter.hpp"
#include "tempconverter.hpp"

class celciustofahrenheit : public TempConverter
{
public:
	celciustofahrenheit();
	double convert(double inTemp);
	std::string toString() const;
	void print() const;
	
	//Exercise 05
	celciustofahrenheit(std::shared_ptr<converter> decorate_fahrenheit) : TempConverter{ decorate_fahrenheit }{}
	static std::shared_ptr<converter> create();
	
	
};

#endif //CELCIUSTOFAHRENHEIT_H