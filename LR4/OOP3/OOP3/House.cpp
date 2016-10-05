#include "stdafx.h"
#include "House.h"

House::House() 
{
	counter++;
};

void House:: set() 
{
	cout << "Введите количество окон дома : "; cin >> number_window; 
	cout << "Введите количество комнат дома : "; cin >> number; 
	cout << "Введите цвет обоев в доме : "; cin >> TypePol; 
	cout << "Введите площадь дома : "; cin >> area; 
}

void House::toConsole() 
{
	cout << "Количество окон дома : " << number_window << endl;
	cout << "Количество комнат дома : " << number << endl;
	cout << "Цвет обоев в доме : " << TypePol << endl;
	cout << "Площадь дома : " << area << endl;
}

int House::GetCounter()
{
	return counter;
}

House::~House() 
{
	counter--;
};