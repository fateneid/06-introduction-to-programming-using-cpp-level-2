#pragma once

#include <iostream>
using namespace std;

namespace L42_PointerToVoid {

	void Task() {

		void* ptr;
		int x = 50;
		float f1 = 10.5;

		ptr = &f1;

		cout << ptr << endl;
		cout << *(static_cast<float*>(ptr)) << endl;

		ptr = &x;

		cout << ptr << endl;
		cout << *(static_cast<int*>(ptr)) << endl;



	}


}
