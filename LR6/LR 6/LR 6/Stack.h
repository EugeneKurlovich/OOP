#include "stdafx.h"

class Stack
{
public:
	stack <int> myIntStack;
	Stack();
	Stack operator >(Stack &A) ;
	void operator + (int a);
	void operator -- ();
	 operator bool();
	 void showStack(int size);
	 void sortStack(int size);
	~Stack();
};