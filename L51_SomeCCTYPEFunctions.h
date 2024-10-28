#pragma once

#include <iostream>
#include <string>
#include <cctype>

using namespace std; 

namespace L51_SomeCCTYPEFunctions {

	void Task() {

		char x;
		char w;

		x = toupper('a');
		w = tolower('A');

		cout << "converting a to A: " << x << endl;
		cout << "converting A to a: " << w << endl;

		// Digits (A to Z)
		// returns zero if not, and non zero if yes
		cout << "isupper('A') " << isupper('A') << endl;

		// lower case (a to z)
		// returns zero if not, and non zero if yes
		cout << "islower('a') " << islower('a') << endl;

		// Digits (0 to 9)
		// returns zero if not, and non zero if yes
		cout << "isdigit('A') " << isdigit('A') << endl;


	}


}
