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
		cout << "������� ��������� : " << a << endl;
		cout << "��������� ����� ������ Island" << endl;
		cout << "�������� ��������� : "; cin >> isl.population;
		cout << "��������� ��������� : " << isl.population << endl;;
	}

public:
	Island();
	void Abstract::toConsole();
	void SetPopulation();
	double GetPopulation();
	~Island();	
};