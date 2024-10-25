#pragma once

#include <iostream>
using namespace std;

namespace L39_CallByReferenceAndUsingPointers {

	void swap(int *n1, int *n2) {

		int temp;
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;

	}

	void Task() {

		int a = 1, b = 2;
		cout << "Before swapping" << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;

		swap(&a, &b);

		cout << "After swapping" << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;



	}


}
