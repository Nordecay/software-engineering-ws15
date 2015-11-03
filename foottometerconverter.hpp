#ifndef FOOTTOMETERCONVERTER_H
#define FOOTTOMETERCONVERTER_H

//#include "converter.hpp"
#include "lengthconverter.hpp"

class foottometerconverter : public LengthConverter
{
public:
	foottometerconverter();
	double convert(double infoot);
	std::string toString() const;
	void print() const;

	//Exercise 05
	foottometerconverter(std::shared_ptr<converter> decorate_meter) : LengthConverter{ decorate_meter }{}
	static std::shared_ptr<converter> create();
	
	
};

#endif // FOOTTOMETERCONVERTER_H






	
