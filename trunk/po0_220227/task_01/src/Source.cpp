#include "Header.h"
#include <iostream>

Car::Car()
{
	brand = "";
	power = 0;
	cost = .0;

	std::cout << "The object " << this << " was created using the default constructor!" << std::endl;
}

Car::Car(std::string brand, int power, float cost)
{
	this->brand = brand;
	this->power = power;
	this->cost = cost;

	std::cout << "The object " << this << " was created using a constructor with parameters!" << std::endl;
}

Car::Car(Car const& car) {
	this->brand = car.brand;
	this->power = car.power;
	this->cost = car.cost;

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

float Car::GetCost() {
	return cost;
}



