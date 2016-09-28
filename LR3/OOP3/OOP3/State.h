#pragma once
#include "stdafx.h"
#include "Island.h"
#include "Continent.h"

class State :
	public Island
{
	double population;

public:
	State();
	void SetPopulation();
	double GetPopulation();
	void ShowPopulation();
	~State();
};