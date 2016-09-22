#include "stdafx.h"
#include "Treangle.h"

static int max_rb = 0 , min_rb = 100;
static int max_rs = 0 , min_rs = 100;
static int max_pr = 0 , min_pr = 100;

static int type_one = 0;
static int type_two = 0;
static int type_three = 0;

Treangle::Treangle() 
{
}

Treangle::Treangle(int t_x1, int t_y1, int t_x2, int t_y2, int t_x3, int t_y3) : x1(t_x1),y1(t_y1),x2(t_x2),y2(t_y2),x3(t_x3),y3(t_y3)
{

}

Treangle::Treangle(const Treangle&A)
{
	x1 = A.x1; y1 = A.y1;
	x2 = A.x2; y2 = A.y2;
	x3 = A.x3; y3 = A.y3;

}

Treangle::~Treangle() 
{

}

void Treangle::setdata(int t_x1, int t_y1, int t_x2, int t_y2, int t_x3, int t_y3)
{
	x1 = t_x1; y1 = t_y1;
	x2 = t_x2; y2 = t_y2;
	x3 = t_x3; y3 = t_y3;
}

void Treangle::getdata()
{
	cout << "Координаты Треугольника" << endl;
	cout << "(x1,y1) = (" << x1 << ", " << y1 << ");" << endl;
	cout << "(x2,y2) = (" << x2 << ", " << y2 << ");" << endl;
	cout << "(x3,y3) = (" << x3 << ", " << y3 << ");" << endl;
}

void Treangle::len_perimetr()
{
	int A = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	int B = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	int C = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	cout << "Длина стороны А = " << A << "см." << endl;
	cout << "Длина стороны B = " << B << "см." << endl;
	cout << "Длина стороны C = " << C << "см." << endl;

	int result;
	result = A + B + C;

	cout << "Периметр = " << result << "см." <<endl;
}

bool Treangle::type_treangle3()
{
	int A = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	int B = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	int C = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	if (A != B && A != C && B != C)
	{
		return true;
	}

	else 
		return false;
}

bool Treangle::type_treangle2()
{
	int A = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	int B = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	int C = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	if (B == C && B!= A )
	{
		return true;
	}
	else
		return false;
}

bool Treangle::type_treangle1()
{
	int A = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	int B = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	int C = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	if (A == B && A == C && B == C)
	{
		return true;
	}
	else
		return false;
}

void Treangle::all_type_treangles()
{
	int A = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	int B = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	int C = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	if (A == B && A == C && B == C)
	{
		int min;
		cout << "Равносторонний треугольник" << endl;
		type_one++;

	}

	else if (B == C || A == B || A == C && !(A == B == C))
	{
		cout << "Равнобедренный треугольник" << endl;
		type_two++;
	}

	else
	{
		cout << "Произвольный треугольник" << endl;
		type_three++;
	}
}

int Treangle::get_perimetr()
{
	int A = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	int B = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	int C = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	
	int result;
	result = A + B + C;
	return result;
}

void result()
{
	cout << type_one << " Равносторонних треугольника" << endl;
	cout << type_two << " Равнобедренных треугольника" << endl;
	cout << type_three << " Произвольных треугольника" << endl;
}

void max_perimetr(Treangle *arr, int size)
{
	
	for (int i = 1; i < size; i++)
		{
		if (arr[i].type_treangle1() == true)
			if (arr[i].get_perimetr() > max_rs) max_rs = arr[i].get_perimetr();
		}
		std::cout << "Максимальный периметр равноcторонних треугольников = " << max_rs << endl;

		
		for (int i = 1; i < size; i++)
		{
			if (arr[i].type_treangle2() == true)
				if (arr[i].get_perimetr() > max_rb) max_rb = arr[i].get_perimetr();
		}
		std::cout << "Максимальный периметр равнобедренных треугольников = " << max_rb << endl;

		
		for (int i = 1; i < size; i++)
		{
			if (arr[i].type_treangle3() == true)
				if (arr[i].get_perimetr() > max_pr) max_pr = arr[i].get_perimetr();
		}
		cout << "Максимальный периметр произвольных треугольников = " << max_pr << endl;
	}
	
void min_perimetr(Treangle *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].type_treangle1() == true)
			if (arr[i].get_perimetr() < min_rs) min_rs = arr[i].get_perimetr();
	}
	std::cout << "Минимальный периметр равноcторонних треугольников = " << min_rs << endl;


	for (int i = 0; i < size; i++)
	{
		if (arr[i].type_treangle2() == true)
			if (arr[i].get_perimetr() < min_rb) min_rb = arr[i].get_perimetr();
	}
	std::cout << "Минимальный периметр равнобедренных треугольников = " << min_rb << endl;


	for (int i = 0; i < size; i++)
	{
		if (arr[i].type_treangle3() == true)
			if (arr[i].get_perimetr() < min_pr) min_pr = arr[i].get_perimetr();
	}
	cout << "Минимальный периметр произвольных треугольников = " << min_pr << endl;
}
