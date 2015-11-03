#include "ouncestogrammconverter.hpp"

#include <string>

ouncestogrammconverter::ouncestogrammconverter()
{
}

/*In: double value of Ounces
*Out: Gramm value of input Ounces
*/
/* Exercise 04
double ouncestogrammconverter::convert(double inputOunces){
	return inputOunces / 0.035274;
}
*/

/* Exercise 5 */
double ouncestogrammconverter::convert(double inputOunces){
	if (toDecorate == nullptr)
		return inputOunces / 0.035274;
	else
		return toDecorate->convert(inputOunces / 0.035274);

}

std::string ouncestogrammconverter::toString() const{
	return "Ounces to Gramm Converter";
}

void ouncestogrammconverter::print() const{
	std::cout << this->toString();
}

std::shared_ptr<converter> ouncestogrammconverter::create()
{
	return std::make_shared<ouncestogrammconverter>();
}