#include "stdafx.h"
#include "Land.h"

Land::Land()
{
	cout << "����������� ������ Land" << endl;
}

void Land::SetTypeLand()
{
	cout << "������� ��� ����� : " ;
	cin >> TypeLand;
	cout << endl;
}

string Land::GetTypeLand()
{
	return TypeLand;
}

void Land::ShowTypeLand()
{
	cout << "��� ����� : " << TypeLand << endl;
}

Land::~Land()
{
	cout << "���������� ������ Land" << endl;
}