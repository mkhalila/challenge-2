#ifndef MAXIMUM_GATES_H
#define MAXIMUM_GATES_H

#include <vector>
using std::vector;

int getLatestDepart(const vector<int> & departs) {
	int latest = 0;
	for (int i = 0; i < departs.size(); ++i) {
		if (departs[i] > latest) latest = departs[i];		
	}
	return latest;
}

// TODO: Your answer for question 2 goes here
int maximumGates(const vector<int> & arrives, const vector<int> & departs) {
	int gates = 0;
	int maxGates = 0;

	for (int i = 0; i < getLatestDepart(departs); ++i) {
		for (int j = 0; j < arrives.size(); ++j) {
			if (i == arrives[j]) ++gates;
			if (i == departs[j]) --gates;
		}
		if (gates > maxGates) maxGates = gates;
	}

	return maxGates;
}

// Do not write any code below this line


#endif
