#include "stdafx.h"
#include "Continent.h"

Continent::Continent()
{
	cout << "Конструктор класса Continent" << endl;
}

void Continent::toConsole()
{
	cout << typeid(this).name();
	cout << "Название : " << name << endl;
	cout << "Площадь : " << area << endl;
}


void Continent::SetName()
{
	cout << "Введите название : ";
	cin >> name;
	cout << endl;
}

string Continent::GetName()
{
	return name;
}

Continent::~Continent()
{
	cout << "Деструктор класса Continent" << endl;
}