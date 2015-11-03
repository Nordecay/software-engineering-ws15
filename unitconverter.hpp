#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>

class UnitConverter
{
  public:
    UnitConverter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // CONVERTER_H
