#ifndef HOW_MANY_WAYS_TO_MAKE_H
#define HOW_MANY_WAYS_TO_MAKE_H

#include <vector>
using std::vector;

// TODO: Your answer for question 1a goes here

int howManyWaysToMake(const int & total, const vector<int> & coins) {
	// This method was implemented using the mathematical recursive formula:
	// f(n, k) = 0, if k < 1 or n < 0
	//			 1, if n = 0
	// f(n, k-1) + f(n - ak, k), else
	// Where m is the target value, k is the coins stack, and ak is a coin that did reduce the target (while maintaining constraints)
	// Note: Slight amendments of notation have been made due to formatting constraints on this text editor

	// The code below was written by me, using the above formula which I extracted from the following Mathematical paper
	// written by Andrew Neitsch:
	// https://andrew.neitsch.ca/publications/m496pres1.nb.pdf

	if (coins.size() < 1 || total < 0) {
		return 0;
	}

	if (total == 0) {
		return 1;
	}

	vector<int> copy = coins.resize(coins.size() - 1);

	return howManyWaysToMake(total, copy) + howManyWaysToMake(total - coins[coins.size() - 1], coins);
}


// Do not write any code below this line

#endif
