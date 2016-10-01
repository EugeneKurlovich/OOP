#pragma once
#include "stdafx.h"
#include "Continent.h"

class Island :
public Continent
{
	double population;

public:
	Island();
	void SetPopulation();
	double GetPopulation();
	void ShowPopulation();
	~Island();	
};