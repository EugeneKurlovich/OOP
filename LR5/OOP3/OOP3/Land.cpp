#include "stdafx.h"
#include "Land.h"

Land::Land()
{

}

void Land::toConsole()
{
	cout << "Class Land" << endl;
	cout << "������� ���� (��.��.) : " << area << endl;
}


void  Land :: set()
{
	cout << "������� ������� ���� (��.��.) : ";
	cin >> area;
}

Land::~Land()
{
	cout << "���������� ������ Land" << endl;
}