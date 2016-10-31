#include "stdafx.h"

class Stack
{
private:
	int value;
	int size;
	Stack *top, *next;

public:
	Stack();

	friend Stack operator+(Stack &x, const int y);
	friend int operator --(Stack &x, const int y);
	friend void operator >( Stack &x,  Stack &y);
	operator bool();

	void push(int x);
	int pop();
	void out();
	void sortStack(Stack & b,int size);

	~Stack();
};