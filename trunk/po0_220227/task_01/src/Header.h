#ifndef CLASSH
#define CLASSH

#include <string>
using namespace std;

class Car {
public:
	Car();
	Car(string brand, int power, float cost);
	Car(Car const &car);
	~Car();
	void destroy();

	void SetBrand(string brand);
	void SetPower(int power);
	void SetCost(float cost);

	string GetBrand();
	int GetPower();
	float GetCost();
private:
	string brand;
	int power;
	float cost;
};
#endif




