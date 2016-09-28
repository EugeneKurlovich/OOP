#include "stdafx.h"
#include "Island.h"
#include "Continent.h"
#include "Land.h"
#include "Sea.h"
#include "State.h"

int main()
{
	setlocale(LC_ALL , "Russian");

	Continent a;
	Island b;
	State c;
	Land d;
	Sea e;

	cout << endl;
	cout << "Continent" << endl;
	a.SetName();
	a.Show_Name();

	cout << endl;

	cout << "Island" << endl;
	b.SetName();
	b.SetArea();
	b.Show_Name();
	b.ShowArea();

	cout << endl;

	cout << "State" << endl;
	c.SetName();
	c.SetArea();
	c.SetPopulation();
	c.Show_Name();
	c.ShowArea();
	c.ShowPopulation();

	cout << endl;
	cout << "Land" << endl;
	d.SetName();
	d.SetArea();
	d.SetTypeLand();
	d.Show_Name();
	d.ShowArea();
	d.ShowTypeLand();

	cout << endl;
	cout << "Sea" << endl;
	e.SetName();
	e.SetMaxDepth();
	e.Show_Name();

	e.ShowMaxDepth();

	cout << endl;

	system("pause");
	return 0;
}