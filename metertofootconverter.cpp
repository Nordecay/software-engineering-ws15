#include "metertofootconverter.hpp"

#include <string>

metertofootconverter::metertofootconverter()
{
}

/*In: double value of Meter
*Out: Foot value of input Meter as of 19.10.14
*/

/* Exercise 04
double metertofootconverter::convert(double inputmeter){
	return inputmeter *3.2808;
}
*/

double metertofootconverter::convert(double inputmeter)
{
	if (toDecorate == nullptr)
		return inputmeter *3.2808;
	else
		return toDecorate->convert(inputmeter *3.2808);

}

std::string metertofootconverter::toString() const
{
	return "Meter to Foot Converter ";
}

void metertofootconverter::print() const
{
	std::cout << this->toString();
}

std::shared_ptr<converter> metertofootconverter::create()
{
	return std::make_shared<metertofootconverter>();
}