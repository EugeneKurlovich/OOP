#include "stdafx.h"
#include "Island.h"

Island::Island()
{
	cout << "Конструктор класса Island " << endl;
}

void Island::SetArea()
{
	cout << "Введите площадь (кв.км.): ";
	cin >> area;
	cout << endl;
}

double Island::GetArea()
{
	return area;
}

void Island::ShowArea()
{
	cout << "Площадь (кв.км.) : " << area << endl;
}

Island::~Island()
{
	cout << "Деструктор класса Island " << endl;
}