#pragma once

#include <iostream>
using namespace std;

namespace L16_FunctionOverloading{

	int MySum(int a, int b) {
		return(a + b);
	}

	double MySum(double a, double b) {
		return(a + b);
	}

	int MySum(int a, int b, int c) {
		return(a + b + c);
	}
	int MySum(int a, int b, int c, int d) {
		return(a + b + c + d);
	}

	void Task()
	{

		cout << MySum(10, 20) << endl;
		cout << MySum(10.1, 20.3) << endl;
		cout << MySum(10, 20, 30) << endl;
		cout << MySum(10, 20, 30, 40) << endl;

		cout << MySum(3.0, 3.3);

		//cout<< max()

	}

}

