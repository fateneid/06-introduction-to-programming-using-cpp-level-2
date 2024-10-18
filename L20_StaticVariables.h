#pragma once

#include <iostream>
using namespace std;

namespace L20_StaticVariables{

	void MyFunc() {

		static int Number = 1;

		cout << "Value of Number: " << Number << "\n";

		Number++;
	}


	void Task()
	{

		MyFunc();
		MyFunc();
		MyFunc();

	}
	/* without static will return all 1, becouse functions normally destroy all variables after getting out
	from the functions without static variables inside functions called local */


}

