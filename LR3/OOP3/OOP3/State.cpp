#include "stdafx.h"
#include "State.h"

State::State()
{
	cout << "����������� ������ State" << endl;
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

void State::ShowCapital()
{
	cout << "������� : " << capital << endl;
}

State::~State()
{
	cout << "���������� ������ State" << endl;
}