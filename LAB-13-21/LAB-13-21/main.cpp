//Неявное подключение библиотеки
//#pragma comment(lib,"F:\\OOP2repoz\\LAB13 DLL\\MyDLL\\Debug\\MyDLL.lib")
#include <iostream>
#include "windows.h"

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");

	//Динамическое подключение dll
	HINSTANCE hm = NULL;
	typedef  unsigned long long(WINAPI MESS)();
	MESS* func;
	//Поиск библиотеки
	hm = ::LoadLibrary(L"F:\\OOP2repoz\\LAB13 DLL\\MyDLL\\Debug\\MyDLL.dll");
	if (hm != NULL)
	{
		//Поиск в библиотеке нужной функции
	func = (MESS*)::GetProcAddress(hm, "IsCheckDisks");
		if (func != NULL)
		{
			cout << func();

		}
		else
		{
			cout << "Error Load function" << endl;
		}
		//Освобождение памяти
		::FreeLibrary(hm);
	}
	else cout << "error load Dll" << endl;
}