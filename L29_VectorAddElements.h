#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace L29_VectorAddElements {

	void ReadNumbersInVector(vector <int>& vNumbers) {
		char AddMore = 'y';
		int Number;
		do {
			cout << "Please enter a number to add? ";
			cin >> Number;
			vNumbers.push_back(Number);
			cout << "Do you want to add another number? (Y/N) ";
			cin >> AddMore;
			cout << '\n';
		} while (AddMore == 'y' || AddMore == 'Y');

	}

	void PrintNumbersInVector(vector <int>& vNumbers) {
		cout << "\nVector's Numbers: \n\n";

		for (int Number : vNumbers) {
			cout << Number << endl;
		}

		cout << '\n';
	}


	void Task()
	{
		//Lesson's example
		/*

		vector <int> vNumbers;

		vNumbers.push_back(10);
		vNumbers.push_back(20);
		vNumbers.push_back(30);
		vNumbers.push_back(40);
		vNumbers.push_back(50);
		vNumbers.push_back(60);
		vNumbers.push_back(70);
		vNumbers.push_back(80);
		vNumbers.push_back(90);
		vNumbers.push_back(100);

		cout << "Numbers Vector: \n\n";

		for (int& Number : vNumbers) {
			cout << Number << endl;
		}
		
		*/

		vector <int> vNumbers;

		ReadNumbersInVector(vNumbers);

		PrintNumbersInVector(vNumbers);


	}


}


