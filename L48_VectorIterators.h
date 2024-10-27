#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace L48_VectorIterators {

	void Task() {

		vector<int> num{ 1,2,3,4,5 };

		// declare iterator
		vector<int>::iterator iter;

		// use iterator with for loop
		for (iter = num.begin(); iter != num.end(); iter++) {

			cout << *iter << "  ";
		}


	}

}