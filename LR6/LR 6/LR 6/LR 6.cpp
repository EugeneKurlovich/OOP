#include "stdafx.h"
#include "Stack.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Stack aa;

	cout << "�������� �� ������� :" << endl;
	(bool)aa;

	cout << "���������� ���������" << endl;
	int size = 0, element;
	cout << "������� ���������� ����������� ��������� : "; cin >> size;
	for (int i = 0 ;i < size; i++)
		{
		cin >> element;
		aa+element;
		}

	cout << "�������� �� ������� :" << endl;
	(bool)aa;

	cout << "���������� : ";
	--aa;
	cout << endl;

	Stack bb;
	bb > aa;
	bb.sortStack(size);
	cout << "���� �2 : ";
	bb.showStack(size);
	cout << endl;
	system("pause");
    return 0;
}

