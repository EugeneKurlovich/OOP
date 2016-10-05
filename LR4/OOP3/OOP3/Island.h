#pragma once
#include "stdafx.h"
#include "Continent.h"


class Island :
public Continent
{
	double population;

	friend class Instector;
	friend void iCanModify(Island &isl)
	{
		double a = isl.GetPopulation();
		cout << "Текущее население : " << a << endl;
		cout << "Изменение полей класса Island" << endl;
		cout << "Измените население : "; cin >> isl.population;
		cout << "Изменённое население : " << isl.population << endl;;
	}

public:
	Island();
	void Abstract::toConsole();
	void SetPopulation();
	double GetPopulation();
	~Island();	
};