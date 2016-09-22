#include "stdafx.h"
#include "Treangle.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Treangle *arr_obj = new Treangle[9];

	Treangle one(0, 0, 2, 0, 1, 4); 	arr_obj[0] = one;
	Treangle two(0, 0, 4, 0, 2, 6);		arr_obj[1] = two;
	Treangle three(0, 0, 2, 0, 1, 8);	arr_obj[2] = three;
	Treangle four(0, 0, 2, 0, 1, 2);	arr_obj[3] = four;
	Treangle five(0, 0, 4, 0, 2, 4);	arr_obj[4] = five;
	Treangle six(0, 0, 6, 0, 3, 6);		arr_obj[5] = six;
	Treangle seven(0, 0, 5, 0, 4, 6);	arr_obj[6] = seven;
	Treangle eight(0, 0, 6, 0, 5, 7);	arr_obj[7] = eight;
	Treangle nine(0, 0, 8, 0, 7, 9);	arr_obj[8] = nine;

	for (int i = 0; i < 9; i++)
	{
		cout << "Треугольник №" << i + 1 << endl;

		arr_obj[i].getdata();
		arr_obj[i].len_perimetr();
		arr_obj[i].all_type_treangles();

		cout << endl;
		cout << endl;
	}
	result();

	cout << endl;

	max_perimetr(arr_obj,9);

	cout << endl;

	min_perimetr(arr_obj,9);

	system("pause");
	return 0;
}

