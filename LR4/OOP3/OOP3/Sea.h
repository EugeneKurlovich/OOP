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
			cout << "������� �������� ���������� ������� (��.�.) : "; cin >> speed;
		}
		double GetSpeed()
		{
			return speed;
		}
		void ShowSpeed()
		{
			cout << "�������� ���������� ������� (��.�.) : " << speed << endl;
		}

		void CallMethod(Sea& zu)
		{
			cout << "����� ������ �������� ������ " << endl;
			zu.ShowMaxDepth();
		}

			} f;


	double MaxDepth;

public:
	Sea();
	void SetMaxDepth();
	double GetMaxDepth();
	void TestPole();
	void ShowMaxDepth();
	void Abstract::toConsole();
	~Sea();
};