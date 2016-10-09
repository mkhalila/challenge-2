#ifndef STACK_H
#define STACK_H

#include "vector.h"
#include <string>
#include <sstream>
#include <iterator>
using pep::vector;
using std::string;
using std::istringstream;

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

vector<string> toTokens(const string & s) {
	vector<string> tokens;

    istringstream iss(s);
    do {
        string token;
        iss >> token;
        tokens.push_back(token);
    } while (iss);

    return tokens;
}

double evaluate(const string & rpn) {
	const vector<string> & tokens = toTokens(rpn);
}


// Do not write anything below this line

#endif
