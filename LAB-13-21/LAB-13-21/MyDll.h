#pragma once
#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

MYDLL_API void fooPrintInfo();

class MYDLL_API MyDll
{
public:
	MyDll();
	void printInfo();
};

