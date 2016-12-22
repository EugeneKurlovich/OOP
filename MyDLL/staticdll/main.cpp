#pragma once
#pragma comment(lib,"F:\\OOP2repoz\\LAB13 DLL\\MyDLL\\Debug\\MyDLL.lib")
extern "C" {
#include "../MyDLL/MyDll.h"
}
#include <iostream>
#include "windows.h"

using namespace std;



//static (yavnoe podkl)
void main()
{
	setlocale(LC_CTYPE, "Rus");
	MyDll obj;
	obj.IsCheckDisks();
	IsCheckDisks();
	system("pause");
}