#include "stdafx.h"
#include "Island.h"
#include "Continent.h"
#include "Land.h"
#include "Sea.h"
#include "State.h"

int main()
{
	setlocale(LC_ALL , "Russian");

	Land a;
	Continent b;
	Island c;
	State d;
	Sea e;

	cout << endl;
	cout << "Класс : Land" << endl;

	a.SetArea();
	a.ShowArea();

	cout << endl;

	cout << "Класс : Continent" << endl;

	b.SetName();
	b.SetArea();
	b.ShowName();
	b.ShowArea();

	cout << endl;

	cout << "Класс : Island" << endl;

	c.SetName();
	c.SetArea();
	c.SetPopulation();
	c.ShowName();
	c.ShowArea();
	c.ShowPopulation();

	cout << endl;

	cout << "Класс : State" << endl;

	d.SetName();
	d.SetArea();
	d.SetPopulation();
	d.SetCapital();
	d.ShowName();
	d.ShowArea();
	d.ShowPopulation();
	d.ShowCapital();

	cout << endl;

	cout << "Класс : Sea" << endl;

	e.SetName();
	e.SetArea();
	e.SetMaxDepth();
	e.ShowName();
	e.ShowArea();
	e.ShowMaxDepth();
	
	
	cout << endl;
	cout << "Класс вложенный в Sea " << endl;
	e.f.SetSpeed();
	e.f.ShowSpeed();
	cout << endl;
	system("pause");
	return 0;
}