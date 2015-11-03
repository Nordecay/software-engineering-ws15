#include "celciustofahrenheitconverter.hpp"

#include <string>

celciustofahrenheit::celciustofahrenheit()
{
}

/*In: double value of Celcius
*Out: Fahrenheit value of input Celcius
*/
/* Exercise 04
double celciustofahrenheit::convert(double inputCelcius)
{
	return (inputCelcius*1.8)+32;
}
*/
//Exercise 05
double celciustofahrenheit::convert(double inputCelcius)
{
	if (toDecorate == nullptr)
		return inputCelcius * 1.8 + 32;
	else
		return toDecorate->convert(inputCelcius * 1.8 + 32);

}



std::string celciustofahrenheit::toString() const
{
	return "Celcius to Fahrenheit Converter";
}

void celciustofahrenheit::print() const
{
	std::cout << this->toString();
}

std::shared_ptr<converter> celciustofahrenheit::create()
{
	return std::make_shared<celciustofahrenheit>();
}