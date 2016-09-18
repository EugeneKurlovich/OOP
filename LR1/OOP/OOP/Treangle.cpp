#include "stdafx.h"
#include "Treangle.h"

static int type_one = 0;
static int type_two = 0;
static int type_three = 0;

Treangle::Treangle() 
{
}

Treangle::Treangle(int t_x1, int t_y1, int t_x2, int t_y2, int t_x3, int t_y3)
{
	cout << "Вызов конструктора с параметрами" << endl;
	x1 = t_x1; y1 = t_y1;
	x2 = t_x2; y2 = t_y2;
	x3 = t_x3; y3 = t_y3;
}

Treangle::Treangle(const Treangle&A)
{
	cout << "Конструктор копирования" << endl;
	x1 = A.x1; y1 = A.y1;
	x2 = A.x2; y2 = A.y2;
	x3 = A.x3; y3 = A.y3;

}

Treangle::~Treangle() 
{
	cout << "Деструктор" << endl;
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

void Treangle::type_treangle()
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