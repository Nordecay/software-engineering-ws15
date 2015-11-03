#ifndef FAHRENHEITTOCELCIUS_H
#define FAHRENHEITTOCELCIUS_H

//#include "converter.hpp"
#include "tempconverter.hpp"

class fahrenheittocelcius : public TempConverter

{
public:
	fahrenheittocelcius();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;

	//Exercise 05
	fahrenheittocelcius(std::shared_ptr<converter> decorate_celcius) : TempConverter{ decorate_celcius }{}
	static std::shared_ptr<converter> create();

	
};

#endif //FAHRENHEITTOCELCIUS_H