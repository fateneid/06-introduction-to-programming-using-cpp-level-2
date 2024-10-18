#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace L28_VectorIntroductionDeclarationandInitialization {

	void Task()
	{

		vector <int> vNumbers = { 10,20,30,40,50 };

		cout << "Vector Numbers = ";

		for (int& Number : vNumbers) {
			cout << Number << " ";
		}

		cout << endl;

	}

}


