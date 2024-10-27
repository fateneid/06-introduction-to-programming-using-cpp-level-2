#pragma once

#include <iostream>
using namespace std;

namespace L40_PointersAndArrays {

	void Task() {

		int arr[4] = { 10,20,30,40 };
		int* ptr;
		ptr = arr;
		//ptr is equivalent to &arr[0];
		//ptr + 1 is equivalent to &arr[1];
		//ptr + 2 is equivalent to &arr[2];
		//ptr + 3 is equivalent to &arr[3];

		cout << "Addresses are:\n";
		cout << ptr << endl;
		cout << ptr + 1 << endl;
		cout << ptr + 2 << endl;
		cout << ptr + 3 << endl;

		
		cout << "\nValues are: \n";

		for (int i = 0; i <= 3; i++) {

			cout << *(ptr + i) << endl;

		}

	}

}
