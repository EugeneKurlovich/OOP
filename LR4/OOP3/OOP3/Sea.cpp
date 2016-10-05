#include "stdafx.h"
#include "Sea.h"

Sea::Sea()
{
	cout << "Конструктор класса Sea" << endl;
}

void Sea::toConsole()
{
	cout << typeid(this).name();
	cout << "Максимальная глубина (км.) : " << MaxDepth << endl;
	cout << "Название : " << name << endl;
	cout << "Площадь : " << area << endl;
}

void Sea::SetMaxDepth()
{
	cout << "Введите максимальную глубину  (км.) : ";
	cin >> MaxDepth;
	cout << endl;
}

double Sea::GetMaxDepth()
{
	return MaxDepth;
}

void Sea::ShowMaxDepth()
{
	cout << "Максимальная глубина (км.) : " << MaxDepth << endl;
}

void Sea::TestPole()
{
	cout << "Вызов внешним классом внутреннего " << endl;
	f.SetSpeed();
    f.ShowSpeed();
}

Sea::~Sea()
{
	cout << "Деструктор класса Sea" << endl;
}