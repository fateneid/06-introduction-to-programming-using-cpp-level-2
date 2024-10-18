#pragma once
#include <iostream>

namespace L08h_Salary {

	int ReadNumber() {
		int Number;
		std::cout << "Please enter your monthly salary?" << std::endl;
		std::cin >> Number;
		return Number;
	}
	int ClacYourYearlySalary(int MonthlySalary) {
		return MonthlySalary * 12;
	}
	void PrintYearlySalary(int YearlySalary) {
		std::cout << "Hi Faten, your yearly salary is: " << YearlySalary << std::endl;
	}

}
