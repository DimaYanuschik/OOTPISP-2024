#include "Number.h"
#include <iostream>

Number::Number(const char _designating) : designating(_designating)
{
}

void Number::SetDesignating(const char _designating)
{
	designating = _designating;
}

char Number::GetDesignating() const
{
	return designating;
}

void Number::Print() const
{
	std::cout << "Designating: " << designating << std::endl;
}

void Number::operator = (const Number other)
{
	this->designating = other.designating;
}

bool Number::operator == (const Number other) const
{
	if (this->designating == other.designating)
		return true;
	return false;
}

bool Number::operator != (const Number other) const
{
	return !(*this == other);
}