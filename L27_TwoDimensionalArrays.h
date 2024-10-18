#pragma once

#include <iostream>
using namespace std;

namespace L27_TwoDimensionalArrays {

	void FillTwoDimensionalArray(int Array[10][10]) {
		for (int i = 1; i <= 10; i++) {
			for (int j = 1; j <= 10; j++) {
				Array[i - 1][j - 1] = i * j;
			}
		}

	}

	void PrintTwoDimensionalArray(int Array[10][10]) {
		for (int i = 1; i <= 10; i++) {
			for (int j = 1; j <= 10; j++) {
				printf("%0*d ", 2, Array[i - 1][j - 1]);
			}
			cout << endl;
		}
	}

	void Task()
	{
		int Array[10][10];

		FillTwoDimensionalArray(Array);
		PrintTwoDimensionalArray(Array);

	}

}

