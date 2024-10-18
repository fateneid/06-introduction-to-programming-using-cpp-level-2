#pragma once

#include <iostream>

namespace L10_RangedLoop {

	void Task()
	{

		int Array[] = { 1,2,3,4,5,6,7,8,9 };

		for (int n : Array) {
			std::cout << n << std::endl;
		}

		std::cout << std::endl;

		for (int n : { 10, 20, 30, 40, 50, 60, 70, 80, 90 }) {
			std::cout << n << std::endl;
		}

	}

}


