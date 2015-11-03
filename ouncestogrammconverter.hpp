#ifndef OUNCESTOGRAMM_H
#define OUNCESTOGRAMM_H

//#include "converter.hpp"
#include "weigthconverter.hpp"

class ouncestogrammconverter : public WeightConverter
{
public:
	ouncestogrammconverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;

	//Exercise 05
	ouncestogrammconverter(std::shared_ptr<converter> decorate_gramm) : WeightConverter{ decorate_gramm }{}
	static std::shared_ptr<converter> create();

	
};

#endif //OUNCESTOGRAMM_H