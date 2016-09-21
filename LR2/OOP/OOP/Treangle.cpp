#include "stdafx.h"
#include "Treangle.h"

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

int Treangle::max_perimetr(Treangle one, Treangle two, Treangle three, Treangle four, Treangle five, Treangle six, Treangle seven, Treangle eight, Treangle nine)
{
	int max = 0;
	max = one.get_perimetr();
	if (two.get_perimetr() > max)  max = two.get_perimetr();
	if (three.get_perimetr() > max)  max = three.get_perimetr();
	if (four.get_perimetr() > max)  max = four.get_perimetr();
	if (five.get_perimetr() > max)  max = five.get_perimetr();
	if (six.get_perimetr() > max)  max = six.get_perimetr();
	if (seven.get_perimetr() > max)  max = seven.get_perimetr();
	if (eight.get_perimetr() > max)  max = eight.get_perimetr();
	if (nine.get_perimetr() > max)  max = nine.get_perimetr();

	cout << "Максимальный периметр = " << max << endl;

	return max;
}

int Treangle::min_perimetr(Treangle one, Treangle two, Treangle three, Treangle four, Treangle five, Treangle six, Treangle seven, Treangle eight, Treangle nine)
{
	int min = 0;
	min = one.get_perimetr();
	if (two.get_perimetr() < min)  min = two.get_perimetr();
	if (three.get_perimetr() < min) min = three.get_perimetr();
	if (four.get_perimetr() < min)  min = four.get_perimetr();
	if (five.get_perimetr() < min)  min = five.get_perimetr();
	if (six.get_perimetr() < min)  min = six.get_perimetr();
	if (seven.get_perimetr() < min)  min = seven.get_perimetr();
	if (eight.get_perimetr() < min)  min = eight.get_perimetr();
	if (nine.get_perimetr() < min)  min = nine.get_perimetr();

	cout << "Минимальный периметр = " << min << endl;

	return min;
}