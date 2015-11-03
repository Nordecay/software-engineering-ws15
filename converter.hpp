#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
#include <sstream>
#include <memory>

class converter
{
  protected:
	  converter* toDecorate;

  public:
	  

	converter();
	//converter(converter* toDecorate);
	converter(std::shared_ptr<converter> toDecorate);

	virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;

	static std::shared_ptr<converter> create();
	
	// String to double 
	static double ToDouble(std::string InValue);


};

#endif // CONVERTER_H
