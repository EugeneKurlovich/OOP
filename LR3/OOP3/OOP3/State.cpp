#include "stdafx.h"
#include "State.h"

State::State()
{
	cout << "Конструктор класса State" << endl;
}

void State::SetPopulation()
{
	cout <<"Введите население (млн.чел.) : " ;
	cin >> population;
	cout << endl;
}

double State::GetPopulation()
{
	return population;
}

void State::ShowPopulation()
{
	cout << "Население (млн.чел.) : " << population << endl;
}

State::~State()
{
	cout << "Деструктор класса State" << endl;
}