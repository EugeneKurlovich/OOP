#pragma once
#include "stdafx.h"
#include "Island.h"
#include "Continent.h"

class State :
	public Island
{
	string capital;

public:
	State();
	void SetCapital();
	string GetCapital();
	void ShowCapital();
	~State();
};