#include "stdafx.h"
#include "Land.h"

Land::Land()
{

}

void Land::toConsole()
{
	cout << typeid(this).name();
	cout << "Площадь суши (кв.км.) : " << area << endl;
}


void  Land :: set()
{
	cout << "Введите площадь суши (кв.км.) : ";
	cin >> area;
	cout << endl;
}

double Land::GetArea()
{
	return area;
}

const int Land:: GetSize()
{
	cout << "Полей в классe Land : " << size << endl;
	return size;
}

Land::~Land()
{
	cout << "Деструктор класса Land" << endl;
}