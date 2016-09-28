#pragma once
#include "stdafx.h"
#include "Continent.h"

class Island :
public Continent
{
	double area;

public:
	Island();
	void SetArea();
	double GetArea();
	void ShowArea();
	~Island();	
};