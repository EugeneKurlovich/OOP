#include "stdafx.h"
#include "Island.h"

Island::Island()
{
	cout << "����������� ������ Island " << endl;
}

void Island::toConsole()
{
	cout << "Class Island" << endl;
	cout << "�������� ������� : " << name << endl;
	if (life == true)
		cout << "���������" << endl;
	else
		cout << "�����������" << endl;
}

void Island::set()
{
	cout << "������� �������� : ";
	cin >> name;
	cout << endl;
	cout << "��������� ? (1-�� , 2 - ���) : ";
	cin >> life;
}

string Island::getname()
{
	return name;
}

Island::~Island()
{
	cout << "���������� ������ Island " << endl;
}