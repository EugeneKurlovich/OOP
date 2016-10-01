#pragma once
#include "stdafx.h"
#include "Continent.h"

class Sea : 
public Continent
{
public:
	class Flow
	{
		double speed;
	public:
		void SetSpeed()
		{
			cout << "Введите скорость подводного течения (км.ч.) : "; cin >> speed;
		}
		double GetSpeed()
		{
			return speed;
		}
		void ShowSpeed()
		{
			cout << "Скорость подводного течения (км.ч.) : " << speed << endl;
		}
			} f;

	double MaxDepth;

public:
	Sea();
	void SetMaxDepth();
	double GetMaxDepth();
	void ShowMaxDepth();
	~Sea();
};