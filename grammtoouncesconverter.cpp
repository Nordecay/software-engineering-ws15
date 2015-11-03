#include "grammtoouncesconverter.hpp"

#include <string>

grammtoouncesconverter::grammtoouncesconverter()
{
}

/*In: double value of Gramm
*Out: Ounces value of input Gramm
*/
/* Exercise 04
double grammtoouncesconverter::convert(double inputGramm){
	return inputGramm * 0.035274;
}
*/
/* Exercise 5 */
double grammtoouncesconverter::convert(double inputGramm){
	if (toDecorate == nullptr)
		return inputGramm * 0.035274;
	else
		return toDecorate->convert(inputGramm * 0.035274);

}

std::string grammtoouncesconverter::toString() const{
	return "Gramm to Ounces Converter";
}

void grammtoouncesconverter::print() const{
	std::cout << this->toString();
}

std::shared_ptr<converter> grammtoouncesconverter::create()
{
	return std::make_shared<grammtoouncesconverter>();
}