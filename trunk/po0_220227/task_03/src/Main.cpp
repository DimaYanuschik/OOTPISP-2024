#include <iostream>
#include <string>
#include "Number.h"
#include "Integer.h"
#include "Real.h"
#include "Complex.h"
#include "Container.h"

int main()
{
	Container numbers;

	Integer int1(100);
	Integer int2(200);

	if (int1 == int2)
	{
		std::cout << "Integers are same" << std::endl;
	}
	else
	{
		std::cout << "Integers are different" << std::endl;
	}

	numbers.Add(&int1);
	numbers.Add(&int2);

	Real real1(18);
	Real real2;
	real2 = real1;

	if (real1 == real2)
	{
		std::cout << "Real numbers are same" << std::endl;
	}
	else
	{
		std::cout << "Real numbers are different" << std::endl;
	}

	numbers.Add(&real1);
	numbers.Add(&real2);

	Complex complex1((5.6f, 10.8f);
	Complex complex2(17.9f, 11.56f);

	if (complex1 == complex2)
	{
		std::cout << "Complex numbers are same" << std::endl;
	}
	else
	{
		std::cout << "Complex numbers are different" << std::endl;
	}

	numbers.Add(&complex1);
	numbers.Add(&complex2);

	std::cout << "Amount of numbers: " << numbers.Size() << std::endl;
	numbers.PrintAll();

	numbers[7]->Print();

	system("pause");
}
