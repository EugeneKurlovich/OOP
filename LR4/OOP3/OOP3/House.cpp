#include "stdafx.h"
#include "House.h"

House::House() 
{
	counter++;
};

void House:: set() 
{
	cout << "������� ���������� ���� ���� : "; cin >> number_window; 
	cout << "������� ���������� ������ ���� : "; cin >> number; 
	cout << "������� ���� ����� � ���� : "; cin >> TypePol; 
	cout << "������� ������� ���� : "; cin >> area; 
}

void House::toConsole() 
{
	cout << "���������� ���� ���� : " << number_window << endl;
	cout << "���������� ������ ���� : " << number << endl;
	cout << "���� ����� � ���� : " << TypePol << endl;
	cout << "������� ���� : " << area << endl;
}

int House::GetCounter()
{
	return counter;
}

House::~House() 
{
	counter--;
};