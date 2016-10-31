#include "stdafx.h"
#include "Stack.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Stack a, b,c;

	c--;
	int element;

	cout << "Заполнение стека : " << endl;
	for (int i = 0; i < 3; i++) {
		cin >> element;
		a + element;
		std::cout << std::endl;
	}

	cout << "Проверка на пустоту : ";
	if (bool(a)) {
		std::cout << "Стек пустой." << std::endl;
	}
	else
		std::cout << "В стеке есть элементы." << std::endl;
	cout << "Извлечённый элемент : ";
	a--;
	b + 1;
	b + 2;
	b + 3;
	b + 4;
	cout << "Стек : " << endl;
	a.out();

	cout << "Копирование стека а в стек b : " << endl;
	b > a;
	cout << "Стек b : " << endl;
	b.out();

	system("pause");
	return 0;
}

