#pragma once
#include <iostream>

namespace L09h_ReadNumber {

	int ReadNumber() {
		int Number;
		std::cout << "Please enter a number?" << std::endl;
		std::cin >> Number;
		return Number;
	}
}
