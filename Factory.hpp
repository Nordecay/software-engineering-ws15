#ifndef FACTORYPATTERN_H
#define FACTORYPATTERN_H

#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "foottometerconverter.hpp"
#include "metertofootconverter.hpp"
#include "celciustofahrenheitconverter.hpp"
#include "fahrenheittocelciusconverter.hpp"
#include "grammtoouncesconverter.hpp"
#include "ouncestogrammconverter.hpp"
#include "converter.hpp"

#include <iostream>
#include <string>
#include <map>
#include <functional>
#include <memory>



class FactoryPattern
{

public: 
	FactoryPattern() : factorymap_{}
	{
		
		//Weigthconverter
		factorymap_.insert(std::make_pair("GrammToOunces", grammtoouncesconverter::create));
		factorymap_.insert(std::make_pair("OuncesToGramm", ouncestogrammconverter::create));
		//Moneyconverter
		factorymap_.insert(std::make_pair("EuroToDollar", EuroTodollarConverter::create));
		factorymap_.insert(std::make_pair("DollarToEuro", dollarToEuroConverter::create));
		//TempConverter
		factorymap_.insert(std::make_pair("CelciusToFahrenheit", celciustofahrenheit::create));
		factorymap_.insert(std::make_pair("FahrenheitToCelcius", fahrenheittocelcius::create));
		//Lengthconverter
		factorymap_.insert(std::make_pair("MeterToFoot", metertofootconverter::create));
		factorymap_.insert(std::make_pair("FootToMeter", foottometerconverter::create));
		
	}

	~FactoryPattern();
	
	std::shared_ptr<converter> create(std::string invalue);

private:
	
	std::map<std::string, std::function<std::shared_ptr<converter>()>> factorymap_;

};

#endif //FACTORYPATTERN_H
