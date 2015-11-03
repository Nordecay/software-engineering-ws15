#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "unitconverter.hpp"

class DollarToEuroConverter : public UnitConverter
{
  public:
    DollarToEuroConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOEUROCONVERTER_H
