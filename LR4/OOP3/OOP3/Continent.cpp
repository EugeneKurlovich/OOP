#include "stdafx.h"
#include "Continent.h"

Continent::Continent()
{
	cout << "����������� ������ Continent" << endl;
}

void Continent::toConsole()
{
	cout << typeid(this).name();
	cout << "�������� : " << name << endl;
	cout << "������� : " << area << endl;
}


void Continent::SetName()
{
	cout << "������� �������� : ";
	cin >> name;
	cout << endl;
}

string Continent::GetName()
{
	return name;
}

Continent::~Continent()
{
	cout << "���������� ������ Continent" << endl;
}