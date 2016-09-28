#include "stdafx.h"
#include "Land.h"

Land::Land()
{
	cout << "Конструктор класса Land" << endl;
}

void Land::SetTypeLand()
{
	cout << "Введите тип почвы : " ;
	cin >> TypeLand;
	cout << endl;
}

string Land::GetTypeLand()
{
	return TypeLand;
}

void Land::ShowTypeLand()
{
	cout << "Тип почвы : " << TypeLand << endl;
}

Land::~Land()
{
	cout << "Деструктор класса Land" << endl;
}