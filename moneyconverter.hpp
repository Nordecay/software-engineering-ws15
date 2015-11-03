#ifndef MONEYCONVERTER_HPP
#define MONEYCONVERTER_HPP

#include "converter.hpp"


class MoneyConverter : public converter
{
public:
	
	MoneyConverter(){}
	virtual double convert(double input) = 0;
	MoneyConverter(std::shared_ptr<converter> decorator_money) : converter{ decorator_money }{}

};





#endif //MONEYCONVERTER_HPP