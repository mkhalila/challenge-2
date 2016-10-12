#ifndef HOW_MANY_WAYS_TO_MAKE_H
#define HOW_MANY_WAYS_TO_MAKE_H

#include <vector>
using std::vector;

// TODO: Your answer for question 1a goes here

int howManyWaysToMake(const int & target, const vector<int> & coins) {
	//Create a table using vectors, with a row for every coin
	vector< vector<int> > table(coins.size());

	//1 way to make 0 for every coin
	for (int i = 0; i < table.size(); ++i) {
        table[i] = vector<int>(target);
        table[i][0] = 1;
    }

}


// Do not write any code below this line

#endif
