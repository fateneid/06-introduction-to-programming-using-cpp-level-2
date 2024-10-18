#pragma once

#include <iostream>
using namespace std;

namespace L15_DefaultParameters {

	int MySum(int A, int B, int C = 0, int D = 0) {
		return (A + B + C + D);
	}

	void Task()
	{
		cout << MySum(10, 20) << endl;
		cout << MySum(10, 20, 30) << endl;
		cout << MySum(10, 20, 30, 40) << endl;


	}

}


