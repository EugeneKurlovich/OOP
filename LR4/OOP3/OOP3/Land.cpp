#include "stdafx.h"
#include "Land.h"

Land::Land()
{

}

void Land::toConsole()
{
	cout << typeid(this).name();
	cout << "������� ���� (��.��.) : " << area << endl;
}


void  Land :: set()
{
	cout << "������� ������� ���� (��.��.) : ";
	cin >> area;
	cout << endl;
}

double Land::GetArea()
{
	return area;
}

const int Land:: GetSize()
{
	cout << "����� � �����e Land : " << size << endl;
	return size;
}

Land::~Land()
{
	cout << "���������� ������ Land" << endl;
}