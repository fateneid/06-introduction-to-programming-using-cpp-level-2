#pragma once

#include <iostream>

namespace L11_ValidateNumber {

	int ReadNumber() {
		int Number;
		std::cout << "Please enter a number?" << std::endl;
		std::cin >> Number;

		while (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "Invalid Number, Enter a valid one: " << std::endl;

			std::cin >> Number;
		}
		return Number;
	}


	void Task()
	{

		std::cout << ReadNumber() << std::endl;

	}

}



