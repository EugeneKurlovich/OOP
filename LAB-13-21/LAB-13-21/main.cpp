//������� ����������� ����������
//#pragma comment(lib,"F:\\OOP2repoz\\LAB13 DLL\\MyDLL\\Debug\\MyDLL.lib")
#include <iostream>
#include "windows.h"

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");

	//������������ ����������� dll
	HINSTANCE hm = NULL;
	typedef  unsigned long long(WINAPI MESS)();
	MESS* func;
	//����� ����������
	hm = ::LoadLibrary(L"F:\\OOP2repoz\\LAB13 DLL\\MyDLL\\Debug\\MyDLL.dll");
	if (hm != NULL)
	{
		//����� � ���������� ������ �������
	func = (MESS*)::GetProcAddress(hm, "IsCheckDisks");
		if (func != NULL)
		{
			cout << func();

		}
		else
		{
			cout << "Error Load function" << endl;
		}
		//������������ ������
		::FreeLibrary(hm);
	}
	else cout << "error load Dll" << endl;
}