#pragma once
#include "stdafx.h"
#include "Land.h"

class Continent : public Land
{

public:
	string name;
	Continent();
	void Abstract::toConsole();
	void SetName();
	string GetName();
	~Continent();
};