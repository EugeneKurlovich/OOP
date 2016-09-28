#include "stdafx.h"
#include "Sea.h"

Sea::Sea()
{
	cout << "Конструктор класса Sea" << endl;
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

Sea::~Sea()
{
	cout << "Деструктор класса Sea" << endl;
}