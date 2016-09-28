#pragma once
#include "stdafx.h"
#include "Island.h"

class Land : 
public Island
{
	string TypeLand;
public:
	Land();
	void SetTypeLand();
	string GetTypeLand();
	void ShowTypeLand();
	~Land();
};