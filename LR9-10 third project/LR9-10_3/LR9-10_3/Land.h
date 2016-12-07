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
	bool operator== (const Land& param) const
	{
		if (this->area == param.area)
			return true;
		else
			return false;
	}
	bool operator== (int);
	friend ostream& operator<<(ostream& os, const Land& obj);
	bool operator< (const Land& q) const
	{
		return (this->area < q.area);
	}
	~Land();
};
