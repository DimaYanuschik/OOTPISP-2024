#pragma once

#include <iostream>

class Pair
{
public:
    Pair() = default;
    Pair(const int firstNumber, const double secondNumber);
    Pair(const Pair& other) = default;
    ~Pair() = default;

    Pair& operator=(const Pair& a) = default;
    bool operator==(const Pair& a) const = default;

    friend std::ostream& operator<<(std::ostream& out, const Pair& a)
    {
        out << a.GetFirstNumber() << ":" << a.GetSecondNumber() << std::endl;
        return out;
    }

    friend std::istream& operator>>(std::istream& in, Pair& a)
    {
        std::cout << "Enter first number(int)" << std::endl;
        in >> a.firstNumber;
        std::cout << "Enter second number(double)" << std::endl;
        in >> a.secondNumber;
        return in;
    }

    inline void SetFirstNumber(const int fNum) { firstNumber = fNum; };
    inline void SetSecondNumber(const double sNum) { secondNumber = sNum; };

    inline int GetFirstNumber() const { return firstNumber; };
    inline double GetSecondNumber() const { return secondNumber; };

private:
    int firstNumber = 0;
    double secondNumber = 0.0;

    friend Pair operator+(const Pair& lhs, const Pair& rhs);
};

Pair operator+(const Pair& lhs, const Pair& rhs) {
    return Pair(lhs.firstNumber + rhs.firstNumber, lhs.secondNumber + rhs.secondNumber);
}