#include "stdafx.h"
#include "State.h"

State::State()
{
	cout << "����������� ������ State" << endl;
}

void State::toConsole()
{
	cout << "Class State" << endl;
	
	cout << "�������� ���-��: " << name << endl;
	cout << "������� : " << capital << endl;
	cout << "��������� ����������� : " << population << endl;
}

void State::set()
{
	cout <<"������� ������� : " ;
	cin >> capital;
	cout << endl;
	cout << "������� �������� ���-�� : ";
	cin >> name;
	cout << endl;
	cout << "������� ��������� : ";
	cin >> population;
	cout << endl;
}

State::~State()
{
	cout << "���������� ������ State" << endl;
}