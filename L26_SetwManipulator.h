#pragma once

#include <iostream>
#include <iomanip> 
using namespace std;

namespace L26_SetwManipulator {

	void Task()
	{

		cout << "---------|--------------------------------|---------|" << endl;
		cout << "  Code   |              Name              |  Mark   |" << endl;
		cout << "---------|--------------------------------|---------|" << endl;

		cout << setw(9) << "C101" << "|" << setw(32) << "introduction to programming 1" << "|" << setw(9) << "95" << "|" << endl;
		cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
		cout << setw(9) << "C10352" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
		cout << "---------|--------------------------------|---------|" << endl;


	}

}

