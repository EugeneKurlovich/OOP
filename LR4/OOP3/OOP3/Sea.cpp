#include "stdafx.h"
#include "Sea.h"

Sea::Sea()
{
	cout << "����������� ������ Sea" << endl;
}

void Sea::toConsole()
{
	cout << typeid(this).name();
	cout << "������������ ������� (��.) : " << MaxDepth << endl;
	cout << "�������� : " << name << endl;
	cout << "������� : " << area << endl;
}

void Sea::SetMaxDepth()
{
	cout << "������� ������������ �������  (��.) : ";
	cin >> MaxDepth;
	cout << endl;
}

double Sea::GetMaxDepth()
{
	return MaxDepth;
}

void Sea::ShowMaxDepth()
{
	cout << "������������ ������� (��.) : " << MaxDepth << endl;
}

void Sea::TestPole()
{
	cout << "����� ������� ������� ����������� " << endl;
	f.SetSpeed();
    f.ShowSpeed();
}

Sea::~Sea()
{
	cout << "���������� ������ Sea" << endl;
}