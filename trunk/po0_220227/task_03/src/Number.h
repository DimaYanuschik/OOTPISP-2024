#pragma once

#ifndef NUMBERH
#define NUMBERH

class Number
{
public:
	Number() = default;
	Number(const char _designating);
	virtual ~Number() = default;

	void SetDesignating(const char _designating);
	char GetDesignating() const;

	virtual void Print() const;

	void operator = (const Number _other);
	bool operator == (const Number _other) const;
	bool operator != (const Number _other) const;
private:
	char designating = ' ';
};
#endif 

