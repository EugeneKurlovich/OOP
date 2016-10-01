#pragma once
#include "stdafx.h"
#include "Land.h"

class Continent : public Land
{
	string name;
	
public:
	Continent();
	void SetName();
	string GetName();
	void ShowName();
	~Continent();
};