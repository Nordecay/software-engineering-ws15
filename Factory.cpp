#include "Factory.hpp"

std::shared_ptr<converter> FactoryPattern::create(std::string invalue)
{
	if (factorymap_.find(invalue) != factorymap_.end())
		return factorymap_[invalue]();
	else
		return std::shared_ptr<converter>();
	

}
