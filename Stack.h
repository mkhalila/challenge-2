#ifndef STACK_H
#define STACK_H

#include "vector.h"
#include <string>
using pep::vector;
using std::string;

// TODO: Your code for question 3 goes here
class Stack {
private:
	vector<double> stack; 

public:
	bool empty() const {
		return stack.size() == 0;
	}

	double pop() {
		double toPop = stack[0];
		stack.erase(stack.begin());
		return toPop;
	}

	void push(const double & toPush) {
		stack.insert(stack.begin(), toPush);
	}
};

double evaluate(const string & rpn) {}


// Do not write anything below this line

#endif
