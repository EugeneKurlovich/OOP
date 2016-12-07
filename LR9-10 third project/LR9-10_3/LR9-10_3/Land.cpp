#include "stdafx.h"
#include "Land.h"

Land::Land()
{

}

Land::Land(double Area)
{
	area = Area;
}


bool Land::operator== (int ind)
{
	if (this->GetArea() == ind)
		return true;
	else
		return false;
}
void Land::SetArea(double el)
{
	this->area = el;
}

void Land::SetArea()
{
	cout << "¬ведите площадь суши (кв.км.) : ";
	cin >> area;
	cout << endl;
}

double Land::GetArea()
{
	return area;
}

void Land::ShowArea()
{
	cout << "ѕлощадь суши (кв.км.) : " << area << endl;
}

ostream& operator<<(ostream& os, const Land& obj)
{
	os << obj.area;
	return os;
}

Land::~Land()
{

}