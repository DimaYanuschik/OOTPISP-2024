#include <iostream>
#include "Header.h"
#include <vector>
#include <array>

int main()
{
	string brand;
	std::cout << "Brand: ";
	std::cin >> brand;
	
	int power;
	std::cout << "Power: ";
	std::cin >> power;
	
	float cost;
	std::cout << "Cost: ";
	std::cin >> cost;
	
	Car car1(brand, power, cost);
	void (Car:: * current_fun)();

	current_fun = &Car::destroy;

	vector <Car*> cars;

	cars.push_back(&car1);

	Car car2(car1);

	cars.push_back(&car2);

	Car car3;

	cars.push_back(&car3);

	(car3.*current_fun)();
	
	std::cout << cars[1]->GetBrand() << endl;

	std::array<Car, 3> { Car("Toyota", 387, 70000), Car("Tesla", 670, 90000), Car("BMW", 286, 80000) };
}