#include "Stack.hpp"

Stack::Stack()
{
	this->root = NULL;
}

Stack::~Stack()
{
	delete(this->root);
}

int Stack::pop()
{
	if(this->isEmpty())
	{
		//error
	}
	Cell *temp = this->root;
	this->root = this->root->getNext();
	delete(temp);
	return this->root->getElement();
}

void Stack::push(int element)
{
	Cell* newCell = new Cell(element);
	newCell->setNext(this->root);
	this->root->setNext(newCell);
}

int Stack::top()
{
	return this->root->getElement();
}

bool Stack::isEmpty()
{
	return this->root->getNext() != NULL;
}

void Stack::print()
{
	Stack* temp = new Stack();
	int popped;
	while(!this->isEmpty())
	{
		popped = this->pop();
		temp->push(popped);
	}
	
	while(!temp->isEmpty())
	{
		popped = temp->pop();
		std::cout << popped << std::endl;
		this->push(popped);
	}
	
	delete(temp);
}