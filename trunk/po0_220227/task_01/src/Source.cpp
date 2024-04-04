#include "Header.h"
#include <iostream>

Car::Car() : brand(""), power(0), cost(0.0)
{
	std::cout << "The object " << this << " was created using the default constructor!" << std::endl;
}

Car::Car(std::string brand, int power, float cost) : brand(brand), power(power), cost(cost)
{
	std::cout << "The object " << this << " was created using a constructor with parameters!" << std::endl;
}

Car::Car(Car const& car) : brand(car.brand), power(car.power), cost(car.cost)
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

void Car::SetBrand(std::string brand) {
	this->brand = brand;
}

void Car::SetPower(int power) {
	this->power = power;
}

void Car::SetCost(float cost) {
	this->cost = cost;
}

std::string Car::GetBrand() {
	return brand;
}

int Car::GetPower() {
	return power;
}

float Car::GetCost(){
	return cost;
}





