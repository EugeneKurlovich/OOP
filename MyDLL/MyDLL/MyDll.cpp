#include "MyDll.h"
#include "windows.h"
#include <iostream>

using namespace std;

unsigned long long IsCheckDisks()
{
	cout << "Function is Called" << endl;
	ULARGE_INTEGER C;
	ULARGE_INTEGER D;
	ULARGE_INTEGER E;
	ULARGE_INTEGER F;
	ULARGE_INTEGER result;
	GetDiskFreeSpaceEx(L"C:\\", NULL, NULL, &C);
	GetDiskFreeSpaceEx(L"D:\\", NULL, NULL, &D);
	GetDiskFreeSpaceEx(L"E:\\", NULL, NULL, &E);
	GetDiskFreeSpaceEx(L"F:\\", NULL, NULL, &F);

	std::cout << "Free memory on all disks is "<< C.QuadPart + D.QuadPart + E.QuadPart + F.QuadPart << " bytes!" <<  std::endl;

	return C.QuadPart + D.QuadPart + E.QuadPart + F.QuadPart;
}

MyDll::MyDll()
{
}


void MyDll::IsCheckDisks()
{
	cout << "Called function IsCheckDisks(class MyDll in MyDLL)" << endl;
	ULARGE_INTEGER C;
	ULARGE_INTEGER D;
	ULARGE_INTEGER E;
	ULARGE_INTEGER F;
	ULARGE_INTEGER result;
	GetDiskFreeSpaceEx(L"C:\\", NULL, NULL, &C);
	GetDiskFreeSpaceEx(L"D:\\", NULL, NULL, &D);
	GetDiskFreeSpaceEx(L"E:\\", NULL, NULL, &E);
	GetDiskFreeSpaceEx(L"F:\\", NULL, NULL, &F);
	std::cout << "Free memory on all disks is " << C.QuadPart + D.QuadPart + E.QuadPart + F.QuadPart << "bytes!" << std::endl;
}
