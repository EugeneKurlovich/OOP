#include "stdafx.h"
#include "Continent.h"

Continent::Continent()
{
	cout << "����������� ������ Continent" << endl;
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

void Continent::Show_Name()
{
	cout << "�������� : " << name << endl;
}

Continent::~Continent()
{
	cout << "���������� ������ Continent" << endl;
}