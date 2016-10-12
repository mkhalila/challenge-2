#ifndef YOUR_TEST_FOR_HOW_MANY_WAYS_TO_MAKE_H
#define YOUR_TEST_FOR_HOW_MANY_WAYS_TO_MAKE_H

#include "HowManyWaysToMake.h"

#include <iostream>
using std::cout;
using std::endl;


int testHowManyWaysToMake() {
    // TODO: your test case for question 1b goes inside this function, instead of the next line of code:
    const int possibilities = howManyWaysToMake(124, {5, 4, 3, 2, 1});
    
    if (possibilities == 103664) {
        cout << "1) Pass: code correctly returns that there are 103664 ways to make 124 out of {5, 4, 3, 2, 1}\n";     
        return 0;
    } else {
        cout << "1) Fail: code returns that there are " << possibilities << " ways to make 124 out of {5, 4, 3, 2, 1} -- but the answer is 103664\n";     
        return 1;
    }
    
}


// Do not write any code below this line

#endif
