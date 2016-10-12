#ifndef HOW_MANY_WAYS_TO_MAKE_H
#define HOW_MANY_WAYS_TO_MAKE_H

#include <vector>
using std::vector;

// TODO: Your answer for question 1a goes here

int howManyWaysToMake(const int & total, const vector<int> & coins) {

	if (coins.size() == 0) return 0;

	if (total == 0) return 1;
	
	//Create a table using vectors, with a row for every coin
	vector< vector<int> > table(coins.size());

	//1 way to make 0 for every coin
	for (int i = 0; i < table.size(); ++i) {
        table[i] = vector<int>(total);
        table[i][0] = 1;
    }

    //Set one way to make any total using coin 1 
    for (int i = 0; i < total; ++i) {
        table[0][i] = 1;
    }



}


// Do not write any code below this line

#endif
