#include "stdafx.h"
#include "Flat.h"

Flat::Flat() 
{
};

void ::Flat::set()
{
	cout << "������� ������� �������� : "; cin >> area;
	cout << "������� ���������� ������ �������� : ";  cin >> number; 
	cout << "������� ���� ����� � �������� : "; cin >> TypePol; 
}

void Flat :: toConsole()
{
	cout << "���������� ������ � �������� :" << number <<  endl;
	cout << "���� ����� � �������� : " << TypePol << endl;
	cout << "������� �������� : " << area << endl;
}

Flat::~Flat() {};