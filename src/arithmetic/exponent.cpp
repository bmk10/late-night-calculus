#include "src/arithmetic/exponent.h"

ExponentMathRules::ExponentMathRules(exponent e1, exponent e2)
{
    this->e1=e1;
    this->e2=e2;
}

exponent ExponentMathRules::returnProductRule()
{
    assertExponentBasesEqual();
    return exponent {e1.base, (e1.exponent + e2.exponent)};
}


exponent ExponentMathRules::returnPowerRule()
{
    return exponent {e1.returnExponentPower(), e2.exponent};
}

exponent ExponentMathRules::returnQuotientRule()
{
    assertExponentBasesEqual();
    return exponent {e1.base, (e1.exponent - e2.exponent)};
}

int ExponentMathRules::returnZeroRule()
{
    // need to work out logic
    return 1;
}

void ExponentMathRules::assertExponentBasesEqual()
{
    if (e1.base != e2.base)
    {
        throw std::invalid_argument("Both exponent values must have the same base to use the power rule properly\n");
    }
}
