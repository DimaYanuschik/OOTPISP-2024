#include "Manufactory.h"

Manufactory::Manufactory()  // реализация конструктора без параметорв
{
	strcpy(name, "Неизвестно");
	strcpy(headname, "Неизвестно");
	workers = 0;
	cout << "Вызван конструктор по умолчанию \t объект - " << this << endl;
}
Manufactory::Manufactory(const char* ANAME, const char* AHEADNAME, const int AWORKERS) // реализация конструктора с параметрами
{
	strcpy(this->name, ANAME);
	strcpy(this->headname, AHEADNAME);
	this->workers = AWORKERS;
	cout << "Вызов конструктора с параметрами\t объект - " << this << endl;

}
Manufactory::Manufactory(const Manufactory& other) // реализация конструктора копирования
{
	strcpy(this->name, other.name);
	strcpy(this->headname, other.headname);
	this->workers = other.workers;
	cout << "Вызов конструктора копирования\t\t объект - " << this << endl;
}
Manufactory::~Manufactory() //  реализация деструктора 
{
	cout << "Вызов деструктора\t объект - " << this << endl;
}

void Manufactory::setName(const char* Aname)
{
	strcpy(this->name, Aname);
}

string Manufactory::getName() const
{
	return name;
}

void Manufactory::setheadname(const char* Aheadname)
{
	strcpy(this->headname, Aheadname);
}

string Manufactory::getheadname() const
{
	return headname;
}

void Manufactory::setworkers(const int Aworkers)
{
	this->workers = Aworkers;
}

int Manufactory::getworkers() const
{
	return this->workers;
}

void Manufactory::setFull(const char* Aname, const char* Aheadname, const int Aworkers)
{
	strcpy(this->name, Aname);
	strcpy(this->headname, Aheadname);
	this->workers = Aworkers;
}

void Manufactory::printInfo()
{
	cout << endl;
	cout << "Работник цеха: " << this->name << endl;
	cout << "Начальние цеха: " << this->headname << endl;
	cout << "Количество рабочих: " << this->workers << endl;
	cout << endl;
}
