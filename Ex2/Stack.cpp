#include "Stack.hpp"

Stack::Stack()
{
	this->head = null;
}

Stack::~Stack()
{
	delete(this->head);
}

int Stack::pop()
{
	if(this->isEmpty())
	{
		//error
	}
	Cell *temp = this->root;
	this->root = this->root->getNext();
	delete(temp)
	return this->root->getElement();
}

void Stack::push(int element)
{
	
}

int Stack::top()
{
	return this->head->getElement();
}

bool Stack::isEmpty()
{
	return this->head->getNext() =! null;
}
