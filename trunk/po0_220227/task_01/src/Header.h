#ifndef CLASSH
#define CLASSH

#include <string>

class Car {
public:
	Car();
	Car(const std::string& _brand, int _power, float _cost);
	Car(Car const &_car);
	~Car();
	void destroy();

	void SetBrand(const std::string& _brand);
	void SetPower(int _power);
	void SetCost(float _cost);

	std::string GetBrand() const;
	int GetPower() const;
	float GetCost() const;
private:
	std::string brand;
	int power;
	float cost;
};
#endif




