#include "Header.h"
#include <iostream>

Car::Car() : brand(""), power(0), cost(0.0)
{
	std::cout << "The object " << this << " was created using the default constructor!" << std::endl;
}

Car::Car(const std::string& _brand, int _power, float _cost) : brand(_brand), power(_power), cost(_cost)
{
	std::cout << "The object " << this << " was created using a constructor with parameters!" << std::endl;
}

Car::Car(Car const& _car) : brand(_car.brand), power(_car.power), cost(_car.cost)
{
	std::cout << "The object " << this << " was created using the copy constructor!" << std::endl;
}

Car::~Car()
{
	std::cout << "Destructor was called " << this << std::endl;
}

void Car::destroy()
{
	this->~Car();
}

void Car::SetBrand(std::string _brand) {
	this->brand = _brand;
}

void Car::SetPower(int _power) {
	this->power = _power;
}

void Car::SetCost(float _cost) {
	this->cost = _cost;
}

std::string Car::GetBrand() const {
	return brand;
}

int Car::GetPower() const {
	return power;
}

float Car::GetCost() const {
	return cost;
}





