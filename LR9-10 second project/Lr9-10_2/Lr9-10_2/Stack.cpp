#include "stdafx.h"
#include "Stack.h"

void Stack::push(int x)
{
	Stack *newElement = new Stack;
	newElement->value = x;
	newElement->next = top;
	top = newElement;
	size++;
}

Stack::Stack()
{
	size = 0;
	top = NULL;
}


Stack ::~Stack()
{

}

void operator >(Stack &B, Stack &A)
{
	B = A;
	B.sortStack(B, 3);
}

void Stack::sortStack(Stack&b, int size)
{
	int arr[20];
	for (int i = 0; i < size; i++)
	{
		arr[i] = b.top->value;
		top = top->next;
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
		b.push(arr[i]);
	}
}

int Stack::pop() {
	if (!top) {
		std::cout << "Stack is empty." << std::endl;
		system("pause");
		exit(1);
	}

	int topValue = top->value;
	//top = top->next;
	//size--;

	return topValue;
}

Stack::operator bool() {
	Stack *temp = top;

	while (temp != NULL) {
		if (!top)
			return true;

		temp = temp->next;
	}

	return false;
}

Stack operator+(Stack &x, const int y) {
	Stack *newElement = new Stack;

	newElement->value = y;
	newElement->next = x.top;
	x.top = newElement;
	x.size++;
	return x;
}

int operator --(Stack &x, const int y) {

	if (!x.top)
	{
		std::cout << "Cтек пустой" << std::endl;
		return -1;
	}
	cout << x.top->value << endl;

	return 0;
}

void Stack::out() {
	Stack *temp = top;

	while (temp != NULL) {
		std::cout << temp->value << std::endl;
		temp = temp->next;
	}

	delete temp;

}
