#pragma once

#include <iostream>
#include <string>
using namespace std;

namespace L50_StringObjectCommonMethods {

	void Task() {

		string S1 = "My Name is Faten Eid, I Love Programming.";

		//print the length of the string
		cout << S1.length() << endl;

		//Returns the letter at position 3
		cout << S1.at(3) << endl;

		//Adds @ProgrammingAdvices to the end of string
		S1.append(" @ProgrammingAdvices");
		cout << S1 << endl;

		//inserts Farid at position 20
		S1.insert(20, " Farid");
		cout << S1 << endl;

		//Prints all the next 5 letters from position 12.
		cout << S1.substr(11, 5) << endl;

		//Adds one character to the end of the string
		S1.push_back('X');
		cout << S1 << endl;

		//Removes one character from the end of the string
		S1.pop_back();
		cout << S1 << endl;

		//Finds Farid in the string
		cout << S1.find("Farid") << endl;

		//Finds farid in the string
		cout << S1.find("farid") << endl;

		if (S1.find("farid") == S1.npos) {
			cout << "farid is not foud";
		}

		//clears all string letters.
		S1.clear();
		cout << S1 << endl;

	}

}