#pragma once

#include <iostream>
using namespace std;

namespace L14_DeclarationVsDefinition {

	void Add(int, int);

	void Task()
	{

		Add(10, 20);


	}

	void Add(int A, int B) {
		cout << (A + B) << endl;
	}

}

