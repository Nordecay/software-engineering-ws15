#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

//#include "converter.hpp"
#include "moneyconverter.hpp"


class EuroTodollarConverter : public MoneyConverter
{
public:
	EuroTodollarConverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;

	//Exercise 05
	EuroTodollarConverter(std::shared_ptr<converter> decorate_dollar) : MoneyConverter{ decorate_dollar }{}
	static std::shared_ptr<converter> create();

	
};

#endif // DOLLARTOEUROCONVERTER_H