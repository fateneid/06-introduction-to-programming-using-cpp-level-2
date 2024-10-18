#pragma once

#include <iostream>
#include "L09h_ReadNumber.h"

//using namespace std;

namespace L09_TernaryOperatorShortHandIF {

	void CheckNumberIfPositiveOrNegative(int Number) {
		(Number >= 0) ? std::cout << "Positive" : std::cout << "Negative";
		std::cout << "\n";
	}

	void CheckNumberIfPositiveOrNegativeOrZero(int Number) {

		(Number > 0) ? std::cout << "Positive" : ((Number == 0) ? std::cout << "Zero" : std::cout << "Negative");
		std::cout << "\n";
	}

	void Task()
	{
		int Number = L09h_ReadNumber::ReadNumber();

		CheckNumberIfPositiveOrNegative(Number);
		CheckNumberIfPositiveOrNegativeOrZero(Number);

	}

}


