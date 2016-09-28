#pragma once
#include "stdafx.h"
#include "Continent.h"

class Sea : 
public Continent
{
	double MaxDepth;

public:
	Sea();
	void SetMaxDepth();
	double GetMaxDepth();
	void ShowMaxDepth();
	~Sea();
};