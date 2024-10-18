#pragma once

#include <iostream>
using namespace std;

namespace L19_Recursion {

	void PrintNumbersFromNtoM(int N, int M) {
		if (N <= M) {
			cout << N << endl;
			PrintNumbersFromNtoM(N + 1, M);
		}
	}

	void PrintNumbersFromMtoN(int M, int N) {
		if (M >= N) {
			cout << M << endl;
			PrintNumbersFromMtoN(M - 1, N);
		}
	}

	int MyPower(int Base, int Power) {
		if (Power == 0) {
			return 1;
		}
		else {
			return(Base * MyPower(Base, Power - 1));  //2*2*2*1   for 2^3 test
		}

	}

	void Task()
	{

		PrintNumbersFromNtoM(1, 10);
		cout << endl;
		PrintNumbersFromMtoN(10, 1);
		cout << endl;

		cout << MyPower(2, 3) << endl;

	}

}
