#include "stdafx.h"
#include "Stack.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Stack a, b,c;

	c--;
	int element;

	cout << "���������� ����� : " << endl;
	for (int i = 0; i < 3; i++) {
		cin >> element;
		a + element;
		std::cout << std::endl;
	}

	cout << "�������� �� ������� : ";
	if (bool(a)) {
		std::cout << "���� ������." << std::endl;
	}
	else
		std::cout << "� ����� ���� ��������." << std::endl;
	cout << "����������� ������� : ";
	a--;
	b + 1;
	b + 2;
	b + 3;
	b + 4;
	cout << "���� : " << endl;
	a.out();

	cout << "����������� ����� � � ���� b : " << endl;
	b > a;
	cout << "���� b : " << endl;
	b.out();

	system("pause");
	return 0;
}

