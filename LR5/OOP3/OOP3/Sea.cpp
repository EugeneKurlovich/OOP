#include "stdafx.h"
#include "Sea.h"


Sea::Sea()
{
	cout << "����������� ������ Sea" << endl;
}

void Sea::toConsole()
{
	cout << "Class Sea" << endl;
	cout << "��� : " << name << endl;
}

void Sea::set()
{

	cout << "������� �������� ���� : ";
	cin >> name;
}

Sea::~Sea()
{
	cout << "���������� ������ Sea" << endl;
}