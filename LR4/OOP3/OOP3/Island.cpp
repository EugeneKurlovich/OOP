#include "stdafx.h"
#include "Island.h"

Island::Island()
{
	cout << "����������� ������ Island " << endl;
}

void Island::toConsole()
{
	cout << typeid(this).name();
	cout << "��������� (���.���.) : " << population << endl;
	cout << "������� ���� (��.��.) : " << area << endl;
	cout << "�������� : " << name << endl;
}

void Island::SetPopulation()
{
	cout << "������� ��������� (���.���.): ";
	cin >> population;
	cout << endl;
}

double Island::GetPopulation()
{
	return population;
}

Island::~Island()
{
	cout << "���������� ������ Island " << endl;
}