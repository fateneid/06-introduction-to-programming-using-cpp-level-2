#pragma once

#include <iostream>
using namespace std;

namespace  L36_DereferencingPointer {

	void Task() {

		int a = 10;

		cout << "a value = " << a << endl;
		cout << "a address = " << &a << endl;

		int* p;
		p = &a;

		cout << "pointer value = " << p << endl;
		cout << "value of the address that p is poiting to is  " << *p << endl;

		*p = 20;

		cout << a << endl;
		cout << *p << endl;

		a = 30;

		cout << a << endl;
		cout << *p << endl;



	}


}