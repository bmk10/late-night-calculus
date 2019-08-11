#ifndef EXPONENT_H
#define EXPONENT_H

#include <iostream>
#include <cmath>

struct exponent
{
    int base;
    int exponent;

    int returnExponentPower()
    {
        return static_cast<int>(pow(base,exponent));
    }
};

class ExponentMathRules
{
public:
    ExponentMathRules(exponent e1, exponent e2);
    exponent returnProductRule();
    exponent returnPowerRule();
    exponent returnQuotientRule();
    int returnZeroRule();
    void assertExponentBasesEqual();
private:
    exponent e1;
    exponent e2;
};

#endif // EXPONENT_H
