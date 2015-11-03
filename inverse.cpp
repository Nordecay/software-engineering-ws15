#include "inverse.hpp"
#include "tempconverter.hpp"

double Inverse::convert(double inValue)
{
	if (toDecorate)
	{
		if (dynamic_cast<TempConverter*>(toDecorate))
		{
			std::cout << "sorry: temperature not invertable ";
			return 0;
		}
		return (inValue * inValue) / (toDecorate->convert(inValue));
	}
	else
	{
		std::cout << "error" << std::endl;
		return 0;
	}
}

std::string Inverse::toString() const
{
	if (toDecorate)
		return "Inverse " + toDecorate->toString();
	else
		return "error";
}

void Inverse::print() const
{
	std::cout << this->toString();
}

std::shared_ptr<converter> Inverse::create()
{
	return std::make_shared<Inverse>();
}