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

void Car::SetBrand(const std::string& _brand) {
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

void Car::Show() const {
	std::cout << this->brand << " " << this->power << " " << this->cost << std::endl;
}
