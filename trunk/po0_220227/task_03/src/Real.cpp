#include "Real.h"
#include <iostream>

Real::Real(const int _value) : value(_value)
{
}

void Real::SetValue(const float _value)
{
	value = _value;
}

int Real::GetValue() const
{
	return value;
}

void Real::Print() const
{
	std::cout << "Value: " << value << std::endl;
}

void Real::operator = (const Real other)
{
	this->value = other.value;
}

bool Real::operator == (const Real other) const
{
	if (this->value == other.value)
		return true;
	return false;
}

bool Real::operator != (const Real other) const
{
	return !(*this == other);
}
