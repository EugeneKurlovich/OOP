#pragma once

extern "C" __declspec(dllexport) unsigned long long IsCheckDisks();


extern "C" class __declspec(dllexport) MyDll
{
public:
	MyDll();
	void IsCheckDisks();
};



