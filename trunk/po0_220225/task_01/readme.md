# Лабораторная работа №1 #

## Классы и объекты в С++ ##

## Вариант 10 ##
 

## Цель работы ##
Получить практические навыки реализации классов на С++.


### Блоки с кодом реализации конструкторов и деструктора ###
```c++

Manufactory::Manufactory()  // реализация конструктора без параметорв
{
	strcpy_s(name, "Неизвестно");
	strcpy_s(headname, "Неизвестно");
	workers = 0;
	cout << "Вызван конструктор по умолчанию \t объект - " << this << endl;
}
Manufactory::Manufactory(const char* NAME, const char* HEADNAME, const int WORKERS) // реализация конструктора с параметрами
{
	strcpy_s(this->name, NAME);
	strcpy_s(this->headname, HEADNAME);
	this->workers = WORKERS;
	cout << "Вызов конструктора с параметрами\t объект - " << this << endl;

}
Manufactory::Manufactory(const Manufactory& other) // реализация конструктора копирования
{
	strcpy_s(this->name, other.name);
	strcpy_s(this->headname, other.headname);
	this->workers = other.workers;
	cout << "Вызов конструктора копирования\t\t объект - " << this << endl;
}
Manufactory::~Manufactory() //  реализация деструктора 
{
	cout << "Вызов деструктора\t объект - " << this << endl;
}

```

### Фрагмент программы, показывающий использование указателя на объект и указателя на функцию ###

#### Указатель на объект ####

```c++
Manufactory* point = &person2; // использования указателя  на объект класса
```

#### В переменной а содержится адрес объекта. Затем вызывается метод Print класса Exam. Метод выведет в консоль поля объекта а. ####

#### Указатель на функцию ####

```c++
void(Manufactory:: * pf)() = &Manufactory::printInfo;
(temp.*pf)();
```

#### Адрес функции print записывается в указатель на функцию. Затем каждый элемент массива разыменовывает указатель и вызывает функцию Print ####



#### Результат работы программы ####

[image](images/image.png)