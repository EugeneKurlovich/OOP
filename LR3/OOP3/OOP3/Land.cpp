#include "stdafx.h"
#include "Land.h"

Land::Land()
{
	cout << "����������� ������ Land" << endl;
}

void Land::SetArea()
{
	cout << "������� ������� ���� (��.��.) : " ;
	cin >> area;
	cout << endl;
}

double Land::GetArea()
{
	return area;
}

void Land::ShowArea()
{
	cout << "������� ���� (��.��.) : " << area << endl;
}

Land::~Land()
{
	cout << "���������� ������ Land" << endl;
}