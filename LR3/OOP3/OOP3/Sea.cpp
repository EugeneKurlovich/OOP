#include "stdafx.h"
#include "Sea.h"

Sea::Sea()
{
	cout << "����������� ������ Sea" << endl;
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

Sea::~Sea()
{
	cout << "���������� ������ Sea" << endl;
}