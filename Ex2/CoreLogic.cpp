#include <iostream>
#include "CoreLogic.hpp"
#include "Stack.cpp"

using namespace std;

void CoreLogic::initilize_stack(stack s1){
    for (int i = 1, i<= 30, i=i+1)
      { 
	s1.push(i);
      }
    return s1;
    }

