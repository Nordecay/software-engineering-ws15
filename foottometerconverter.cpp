#include "foottometerconverter.hpp"

#include <string>

foottometerconverter::foottometerconverter()
{
}

/*In: double value of Foot
*Out: Meter value of input Foot 
*/

/* Exercise 04
double foottometerconverter::convert(double inputfoot){
	return inputfoot / 3.2808;
}
*/
// Exercise 05
double foottometerconverter::convert(double inputfoot){
	if (toDecorate == nullptr)
		return inputfoot / 3.2808;
	else
		return toDecorate->convert(inputfoot / 3.2808);

}

std::string foottometerconverter::toString() const{
	return "Foot to Meter Converter ";
}

void foottometerconverter::print() const{
	std::cout << this->toString();
}

std::shared_ptr<converter> foottometerconverter::create()
{
	return std::make_shared<foottometerconverter>();
}