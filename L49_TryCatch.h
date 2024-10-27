#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace L49_TryCatch {

	void Task() {

		vector<int> num{ 1,2,3,4,5 };

		try
		{

			cout << num.at(5);

		}
		catch (...)
		{

			cout << "out of bound\n";

		}


	}


}
