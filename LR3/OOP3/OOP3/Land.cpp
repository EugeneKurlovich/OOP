#include "stdafx.h"
#include "Land.h"

Land::Land()
{
	cout << "Конструктор класса Land" << endl;
}

void Land::SetArea()
{
	cout << "Введите площадь суши (кв.км.) : " ;
	cin >> area;
	cout << endl;
}

double Land::GetArea()
{
	return area;
}

void Land::ShowArea()
{
	cout << "Площадь суши (кв.км.) : " << area << endl;
}

Land::~Land()
{
	cout << "Деструктор класса Land" << endl;
}