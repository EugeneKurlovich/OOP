#include "stdafx.h"
#include "Island.h"

Island::Island()
{
	cout << "Конструктор класса Island " << endl;
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

void Island::ShowPopulation()
{
	cout << "Население (млн.чел.) : " << population << endl;
}

Island::~Island()
{
	cout << "Деструктор класса Island " << endl;
}