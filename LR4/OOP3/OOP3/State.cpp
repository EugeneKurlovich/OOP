#include "stdafx.h"
#include "State.h"

State::State()
{
	cout << "Конструктор класса State" << endl;
}

void State::toConsole()
{
	cout << typeid(this).name();
	cout << "Площадь суши (кв.км.) : " << area << endl;
	cout << "Название : " << name << endl;
	cout << "Столица : " << capital << endl;
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

State::~State()
{
	cout << "Деструктор класса State" << endl;
}