#include "stdafx.h"
#include "Island.h"

Island::Island()
{
	cout << "Конструктор класса Island " << endl;
}

void Island::toConsole()
{
	cout << typeid(this).name();
	cout << "Население (млн.чел.) : " << population << endl;
	cout << "Площадь суши (кв.км.) : " << area << endl;
	cout << "Название : " << name << endl;
}

void Island::SetPopulation()
{
	cout << "Введите население (млн.чел.): ";
	cin >> population;
	cout << endl;
}

double Island::GetPopulation()
{
	return population;
}

Island::~Island()
{
	cout << "Деструктор класса Island " << endl;
}