#include "stdafx.h"
#include "Continent.h"

Continent::Continent()
{
	cout << "����������� ������ Continent" << endl;
}

void Continent::toConsole()
{
	cout << "Class Continent" << endl;
	cout << "�������� : " << name << endl;
	cout << "������� : " << area << endl;
	cout <<"����������� ���������� : " << statess << endl;
}

void Continent::set()
{
	cout << "������� �������� : ";
	cin >> name;
	cout << endl;
	cout << "������� ������� : ";
	cin >> area;
	cout << "������� ����������� ���������� (����� ,) : ";
	cin >> statess;
	cout << endl;
}



Continent::~Continent()
{
	cout << "���������� ������ Continent" << endl;
}