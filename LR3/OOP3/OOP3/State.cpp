#include "stdafx.h"
#include "State.h"

State::State()
{
	cout << "Конструктор класса State" << endl;
}

void State::SetCapital()
{
	cout <<"Введите столицу : " ;
	cin >> capital;
	cout << endl;
}

string State::GetCapital()
{
	return capital;
}

void State::ShowCapital()
{
	cout << "Столица : " << capital << endl;
}

State::~State()
{
	cout << "Деструктор класса State" << endl;
}