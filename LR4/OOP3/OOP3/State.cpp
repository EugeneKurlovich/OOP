#include "stdafx.h"
#include "State.h"

State::State()
{
	cout << "����������� ������ State" << endl;
}

void State::toConsole()
{
	cout << typeid(this).name();
	cout << "������� ���� (��.��.) : " << area << endl;
	cout << "�������� : " << name << endl;
	cout << "������� : " << capital << endl;
}

void State::SetCapital()
{
	cout <<"������� ������� : " ;
	cin >> capital;
	cout << endl;
}

string State::GetCapital()
{
	return capital;
}

State::~State()
{
	cout << "���������� ������ State" << endl;
}