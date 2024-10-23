#pragma once

#include <iostream>
using namespace std;

namespace L37_CommonMistakesWithPointers {

	void Task() {

		int x, * p;

		//Wrong!
		//p is an address but x is not 

		//p = x;

		//Correct!
		//p is an address and so is &x

		p = &x;

		//Wrong!
		//&x is an address
		//*p is the value stored in &x

		//*p = &x;

		//Correct!
		//*p is the value ad so x

		*p = x;




	}


}
