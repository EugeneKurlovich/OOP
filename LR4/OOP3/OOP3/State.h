#pragma once
#include "stdafx.h"
#include "Island.h"
#include "Continent.h"

class State :
	public Island
{

public:
	string capital;
	void Abstract::toConsole();
	State();
	void SetCapital();
	string GetCapital();
	~State();
};