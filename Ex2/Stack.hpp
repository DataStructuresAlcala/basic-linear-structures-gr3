#ifndef STACK_HPP
#define STACK_HPP

#include "Cell.hpp"

class Stack
{
Cell* root;

public:
	Stack();
	~Stack();
	void push(int);
	int pop();
	int top();
	bool isEmpty();
	void print();
}; 

#endif // STACK_HPP
