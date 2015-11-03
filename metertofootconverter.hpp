#ifndef METERTOFOOTCONVERTER_H
#define METERTOFOOTCONVERTER_H

//#include "converter.hpp"
#include "lengthconverter.hpp"

class metertofootconverter : public LengthConverter
{
public:
	metertofootconverter();
	double convert(double inmeter);
	std::string toString() const;
	void print() const;

	//Exercise 05
	metertofootconverter(std::shared_ptr<converter> decorate_celcius) : LengthConverter{ decorate_celcius }{}
	static std::shared_ptr<converter> create();

	
};

#endif // METERTOFOOTCONVERTER_H