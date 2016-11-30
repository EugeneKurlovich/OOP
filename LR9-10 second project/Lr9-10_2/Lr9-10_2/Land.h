#pragma once
#include "stdafx.h"

class Land
{
private:
	double area;
public:
	Land();
	Land(double);
	void SetArea();
	void SetArea(double);
	double GetArea();
	void ShowArea();
	friend ostream& operator << (ostream& out, Land& obj);
	~Land();
};