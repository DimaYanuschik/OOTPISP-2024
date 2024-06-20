#include <iostream>
#include "Manufactory.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Manufactory person1;
	Manufactory person2("Санька", "ПалПалыч", 15);
	Manufactory person3 = person2;

	Manufactory group[] = { Manufactory("Макс", "Лешычч",2),Manufactory("Игнат","Сигмычч",7),Manufactory("Виктор","Каблучичч" ,57)};

	group[0].setName("Олег");

	group[0].printInfo();

	Manufactory* dinamicGrp;
	dinamicGrp = new Manufactory[3];

	dinamicGrp[0].setFull("Никита", "Сергей", 10);

	Manufactory temp(dinamicGrp[0]);

	void(Manufactory:: * pf)() = &Manufactory::printInfo; // использования указателя на метод класса
	(temp.*pf)();

	Manufactory* point = &person2; // использования указателя  на объект класса
	cout << "Вызов функции для указателья на объект класса: " << point->getheadname() << endl;
	cout << endl;
	delete[] dinamicGrp;

}


