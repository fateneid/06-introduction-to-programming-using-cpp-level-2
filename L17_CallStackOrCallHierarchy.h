#pragma once

#include <iostream>
using namespace std;

namespace L17_CallStackOrCallHierarchy {

	void Function4() {
		cout << "Hi, I'm Function4!" << endl;
	}
	void Function3() {
		Function4();
	}
	void Function2() {
		Function3();
	}
	void Function1() {
		Function2();
	}
	void Task()
	{

		Function1();

	}

}


