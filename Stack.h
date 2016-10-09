#ifndef STACK_H
#define STACK_H

#include "vector.h"
using pep::vector;

// TODO: Your code for question 3 goes here
class Stack {
private:
	vector<double> stack; 

public:
	bool empty() const {
		return stack.size() == 0;
	}

	double pop() {}

	void push(const double & toPush) {}
};


// Do not write anything below this line

#endif
