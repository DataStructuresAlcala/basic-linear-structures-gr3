#include "Stack.hpp"

Stack::Stack()
{
	this->root = NULL;
}

Stack::~Stack()
{
	while(!this->isEmpty())
	{
		this->pop();
	}
}

int Stack::pop()
{
	if(this->isEmpty())
	{
		//cout << "There's nothing to pop, the stack is empty." << endl;
		exit(1);
	}
	Cell *temp = this->root;
	int popped = temp->getElement();
	this->root = this->root->getNext();
	delete(temp);
	return popped;
}

void Stack::push(int element)
{
	Cell* newCell = new Cell(element);
	if(!this->isEmpty())
	{
		newCell->setNext(this->root);
	}
	this->root = newCell;
}

int Stack::top()
{
	if(this->isEmpty())
	{
		//cout << "There's nothing to pop, the stack is empty." << endl;
		exit(1);
	}
	return this->root->getElement();
}

bool Stack::isEmpty()
{
	return this->root == NULL;
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
