#pragma once

#include <iostream>
using namespace std;

namespace L18_VSFunctionTips {

	void Function2();

	void KoKo() {
		cout << "Hi, I'm Function4!" << endl;
	}
	void Function3() {
		KoKo();
	}
	void Function2() {
		Function3();
	}
	void Function1() {
		Function2();
		KoKo();
	}
	void Task()
	{

		Function1();

	}

}

