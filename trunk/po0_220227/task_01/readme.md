
# Лабораторная работа №1 #

## Классы и объекты в С++ ##

## Вариант 12 ##
 

## Цель работы ##
Получить практические навыки реализации классов на С++.


### Определение пользовательского класса ###
```c++
class Car {
public:
	Car();
	Car(const std::string& _brand, int _power, float _cost);

	void SetBrand(const std::string& _brand); // установить марку
	void SetPower(int _power); // установить мощность
	void SetCost(float _cost); // установить цену
	void Show() const; // показавать все поля

	std::string GetBrand() const; // получить марку
	int GetPower() const; // получить мощность
	float GetCost() const; // получить цену

private:
	std::string brand; // марка
	int power; // мощность
	float cost; // цена
};

```

### Реализации всех функций класса ###
```c++
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

// Деструктор удалил, чтобы класс соответствовал правилу нуля(sonarcloud)

```

### Фрагмент программы, показывающий использование указателя на объект и указателя на функцию ###

#### Указатель на объект ####

```c++
Car car1(brand, power, cost);
void (Car:: * current_fun)(float);

current_fun = &Car::SetCost;
Car car3;
(car3.*current_fun)(10.0);

Car* ptrCar1 = &car1;
ptrCar1->Show();
```

#### Создаётся указатель current_fun на функцию класса STUDENT с параметром float и указатель ptrCar1 на экземпляр класса Car. Им присваиваются адреса функции SetCost и экземпляра car1 соответственно. Далее для car3 вызывается метод SetCost через указатель, а для ptrCar1 вызывается функция Show ####


