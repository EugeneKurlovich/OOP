#include "stdafx.h"
#include "Island.h"

Island::Island()
{
	cout << "����������� ������ Island " << endl;
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

void Island::ShowPopulation()
{
	cout << "��������� (���.���.) : " << population << endl;
}

Island::~Island()
{
	cout << "���������� ������ Island " << endl;
}