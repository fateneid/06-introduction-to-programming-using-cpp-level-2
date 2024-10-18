#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace L30_VectorOfStructure {

	struct stEmployee {
		string FirstName;
		string LastName;
		float Salary;
	};

	void ReadVector(vector <stEmployee>& vEmployee) {
		stEmployee tempEmployee;
		char AddMore = 'y';
		while (AddMore == 'y' || AddMore == 'Y') {
			cout << "Enter FirstName? ";
			cin >> tempEmployee.FirstName;
			cout << "Enter LastName? ";
			cin >> tempEmployee.LastName;
			cout << "Enter Salary? ";
			cin >> tempEmployee.Salary;
			vEmployee.push_back(tempEmployee);

			cout << "\nDo you want to add another employee (y/n) ? ";
			cin >> AddMore;
		}
	}

	void PrintVector(vector <stEmployee>& vEmployee) {

		cout << "\nEmployees Vector: \n\n";

		for (stEmployee& Employee : vEmployee) {
			cout << "First Name: " << Employee.FirstName << endl;
			cout << "Last Name: " << Employee.LastName << endl;
			cout << "Salary: " << Employee.Salary << endl;
			cout << '\n';
		}
		cout << '\n';

	}


	void Task()
	{

		vector <stEmployee> vEmployee;

		//Lesson's example
		/*
		
		stEmployee tempEmployee;

		tempEmployee.FirstName = "Mohammed";
		tempEmployee.LastName = "Abu-Hadhoud";
		tempEmployee.Salary = 5000;
		vEmployee.push_back(tempEmployee);

		tempEmployee.FirstName = "Faten";
		tempEmployee.LastName = "Eid";
		tempEmployee.Salary = 19000;
		vEmployee.push_back(tempEmployee);

		tempEmployee.FirstName = "Zain";
		tempEmployee.LastName = "Ali";
		tempEmployee.Salary = 10000;
		vEmployee.push_back(tempEmployee);

		cout << "Employees Vector: \n\n";

		for (stEmployee &Employee : vEmployee) {
			cout << "First Name: " << Employee.FirstName << endl;
			cout << "Last Name: " << Employee.LastName << endl;
			cout << "Salary: " << Employee.Salary << endl;
			cout << '\n';
		}
		cout << '\n';
		
		*/

		ReadVector(vEmployee);
		PrintVector(vEmployee);


	}

}


