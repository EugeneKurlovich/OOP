#include "stdafx.h"
#include "Island.h"

Island::Island()
{
	cout << "����������� ������ Island " << endl;
}

void Island::SetArea()
{
	cout << "������� ������� (��.��.): ";
	cin >> area;
	cout << endl;
}

double Island::GetArea()
{
	return area;
}

void Island::ShowArea()
{
	cout << "������� (��.��.) : " << area << endl;
}

Island::~Island()
{
	cout << "���������� ������ Island " << endl;
}