#include "converter.hpp"

converter::converter()
:toDecorate(nullptr)
{


}

/*
converter::converter(converter* doDecorate)
 : toDecorate(toDecorate)
{}
*/

converter::converter(std::shared_ptr<converter> toDecorate)
: toDecorate(toDecorate.get())
{}

double converter::ToDouble(std::string InValue)
{
	std::stringstream income_;
	income_ << InValue;
	double out_value;
	income_ >> out_value;
	return out_value;
}

