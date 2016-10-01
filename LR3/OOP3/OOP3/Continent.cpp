#include "stdafx.h"
#include "Continent.h"

Continent::Continent()
{
	cout << "Конструктор класса Continent" << endl;
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

void Continent::ShowName()
{
	cout << "Название : " << name << endl;
}

Continent::~Continent()
{
	cout << "Деструктор класса Continent" << endl;
}