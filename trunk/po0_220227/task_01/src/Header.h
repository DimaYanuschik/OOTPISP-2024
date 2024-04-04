#ifndef CLASSH
#define CLASSH

#include <string>

class Car {
public:
	Car();
	Car(std::string brand, int power, float cost);
	Car(Car const &car);
	~Car();
	void destroy();

	void SetBrand(std::string brand);
	void SetPower(int power);
	void SetCost(float cost);

	std::string GetBrand();
	int GetPower();
	float GetCost();
private:
	std::string brand;
	int power;
	float cost;
};
#endif




