#include "stdafx.h"
#include "State.h"

State::State()
{
	cout << "����������� ������ State" << endl;
}

void State::SetPopulation()
{
	cout <<"������� ��������� (���.���.) : " ;
	cin >> population;
	cout << endl;
}

double State::GetPopulation()
{
	return population;
}

void State::ShowPopulation()
{
	cout << "��������� (���.���.) : " << population << endl;
}

State::~State()
{
	cout << "���������� ������ State" << endl;
}