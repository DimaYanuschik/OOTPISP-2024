#include "Pair.h"

Pair::Pair(const int fNum, const double sNum)
    : firstNumber(fNum), secondNumber(sNum)
{
}

bool Pair::operator==(const Pair& a) const
{
    return (firstNumber == a.firstNumber && secondNumber == a.secondNumber);
}