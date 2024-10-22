#pragma once

#include <iostream>
using namespace std;

namespace L35_WhatIsPointer {

	void Task() {

		int a = 10;
		int b = 40;

		cout << "a value =  " << a << endl;
		cout << "a address =  " << &a << endl;

		/*cout << "b value =  " << b << endl;
		cout << "b address =  " << &b << endl;*/

		int* p = &a;
		//p = &b;

		cout << "Poiter value =  " << p << endl;

		cout << "Poiter address =  " << &p << endl;

	}



}



