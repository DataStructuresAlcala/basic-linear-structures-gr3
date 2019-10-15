#ifndef STACK_HPP
#define STACK_HPP

#include "Cell.h"

class Stack
{
Cell* head;

public:
	Stack();
	~Stack();
	int push(int)
	void pop();
	int top();
	bool isEmpty();
	void print();
}; 

#endif // STACK_HPP
