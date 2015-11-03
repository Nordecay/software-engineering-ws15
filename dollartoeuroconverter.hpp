#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

//#include "converter.hpp"
#include "moneyconverter.hpp"

class dollarToEuroConverter : public MoneyConverter
{
  public:
    dollarToEuroConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;

	//Exercise 05
	dollarToEuroConverter(std::shared_ptr<converter> decorate_euro) : MoneyConverter{ decorate_euro }{}
	static std::shared_ptr<converter> create();

	
};

#endif // DOLLARTOEUROCONVERTER_H
