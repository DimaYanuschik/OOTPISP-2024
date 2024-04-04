#include <iostream>
#include "Header.h"
#include <vector>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string brand;
	cout << "Brand: ";
	cin >> brand;
	
	int power;
	cout << "Power: ";
	cin >> power;
	
	float cost;
	cout << "Cost: ";
	cin >> cost;
	
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
	
	cout << cars[1]->GetBrand() << endl;

	Car _cars[3] = { Car("Toyota", 387, 70000),
						Car("Tesla", 670, 90000),
						Car("BMW", 286, 80000)
	};

	system("pause");
}