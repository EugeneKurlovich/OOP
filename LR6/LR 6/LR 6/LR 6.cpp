#include "stdafx.h"
#include "Stack.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Stack aa;

	cout << "Проверка на пустоту :" << endl;
	(bool)aa;

	cout << "Добавление элементов" << endl;
	int size = 0, element;
	cout << "Введите количество добавляемых элементов : "; cin >> size;
	for (int i = 0 ;i < size; i++)
		{
		cin >> element;
		aa+element;
		}

	cout << "Проверка на пустоту :" << endl;
	(bool)aa;

	cout << "Извлечение : ";
	--aa;
	cout << endl;

	Stack bb;
	bb > aa;
	bb.sortStack(size);
	cout << "Стек №2 : ";
	bb.showStack(size);
	cout << endl;
	system("pause");
    return 0;
}

