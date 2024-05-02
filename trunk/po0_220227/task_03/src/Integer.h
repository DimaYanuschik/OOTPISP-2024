#pragma once
#include "Number.h"
#ifndef INTEGERH
#define INTEGERH

class Integer :
    public Number
{
public:
    Integer() = default;
    Integer(const int _value);
    ~Integer() = default;

    void SetValue(const int _value);
    int GetValue() const;

    void Print() const override;

    void operator = (const Integer other);
    bool operator == (const Integer other) const;
    bool operator != (const Integer other) const;

private:
    int value = 0;
};
#endif

