
#ifndef GRAMMTOOUNCES_H
#define GRAMMTOOUNCES_H

//#include "converter.hpp"
#include "weigthconverter.hpp"

class grammtoouncesconverter : public WeightConverter
{
public:
	grammtoouncesconverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;

	//Exercise 05
	grammtoouncesconverter(std::shared_ptr<converter> decorate_ounces) : WeightConverter{ decorate_ounces }{}
	static std::shared_ptr<converter> create();

	

};

#endif //GRAMMTOOUNCES_H