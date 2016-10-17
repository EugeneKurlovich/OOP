#include "stdafx.h"
#include "Stack.h"

Stack::Stack()
{

}

void Stack::operator + (int a)
{
	myIntStack.push(a);
}

void Stack::operator -- ()
{
	cout <<	myIntStack.top();
}

void Stack::sortStack(int size)
{
	int arr[20];
	for (int i = 0; i < size; i++)
	{
		arr[i] = myIntStack.top();
		myIntStack.pop();
	}
	for (int i = 0; i < size; i++)
	{
			for (int j = size - 1; j > i; j--)
		{
			if (arr[j] > arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		myIntStack.push(arr[i]);
	}
}

 Stack::operator bool()
{
	 if (myIntStack.size() == 0)
	 {
		 cout << "Стек пуст !" << endl;
		 return true;
	 }
	 else
	 {
		 cout << "Cтек не является пустым ! Он состоит из "<< myIntStack.size() << "элементов." << endl;
		 return false;
	 }
}

 void Stack::showStack(int size)
 {
	 for (int i = 0; i < size; i++)
	 {
		 cout << myIntStack.top();
		 myIntStack.pop();

	 }
 }



Stack Stack::operator >( Stack &A)
	{
	
  myIntStack = A.myIntStack;
	return A;
	}



Stack::~Stack()
{

}