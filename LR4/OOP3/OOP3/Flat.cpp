#include "stdafx.h"
#include "Flat.h"

Flat::Flat() 
{
};

void ::Flat::set()
{
	cout << "Введите площадь квартиры : "; cin >> area;
	cout << "Введите количество комнат квартиры : ";  cin >> number; 
	cout << "Введите цвет обоев в квартире : "; cin >> TypePol; 
}

void Flat :: toConsole()
{
	cout << "Количество комнат в квартире :" << number <<  endl;
	cout << "Цвет обоев в квартире : " << TypePol << endl;
	cout << "Площадь квартиры : " << area << endl;
}

Flat::~Flat() {};