#include "stdafx.h"
#include "Treangle.h"

void result();

int main()
{
	setlocale(LC_ALL, "Russian");

	Treangle one, two, three, four, five, six, seven, eight, nine, eleven ;
	Treangle arr_obj[9];
	Treangle ten(one);

	one.setdata(0, 0, 2, 0, 1, 4);			arr_obj[0] = one;
	two.setdata(0, 0, 4, 0, 2, 6);			arr_obj[1] = two;
	three.setdata(0, 0, 2, 0, 1, 3);		arr_obj[2] = three;
	four.setdata(0, 0, 2, 0, 1, 2);			arr_obj[3] = four;
	five.setdata(0, 0, 4, 0, 2, 4);			arr_obj[4] = five;
	six.setdata(0, 0, 6, 0, 3, 6);			arr_obj[5] = six;
	seven.setdata(0, 0, 5, 0, 4, 6);		arr_obj[6] = seven;
	eight.setdata(0, 0, 6, 0, 5, 7);		arr_obj[7] = eight;
	nine.setdata(0, 0, 8, 0, 7, 9);			arr_obj[8] = nine;


	for (int i = 0; i < 9; i++)
	{
		cout << "Треугольник №" << i + 1 << endl;


		arr_obj[i].getdata();
		arr_obj[i].len_perimetr();
		arr_obj[i].type_treangle();
	
		cout << endl;
		cout << endl;
	}

		result();

		cout << endl;

		int min = 0,i;
		min = arr_obj[1].get_perimetr();
		for (i = 1; i < 9; i++)
		{
			if (i == 8)
				break;
			if ( arr_obj[i+1].get_perimetr() < arr_obj[i].get_perimetr() )
			{

				min = arr_obj[i+1].get_perimetr();
			}
		}
		cout << "Минимальный периметр : "  << min << "см." << endl;

		int max = 0,y;
		max = arr_obj[1].get_perimetr();
		for ( y = 1; y < 9; y++)
		{
			if (y == 8)
				break;
			if (arr_obj[y + 1].get_perimetr() > arr_obj[y].get_perimetr())
			{

				max = arr_obj[y + 1].get_perimetr();
			}
		}
		cout << "Максмальный периметр" << max << "см." << endl;



	system("pause");
	return 0;
}

