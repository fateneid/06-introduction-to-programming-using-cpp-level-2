#pragma once

#include <iostream>
using namespace std;

namespace L24_FloatFormatPrintf {

	void Task()
	{
		float PI = 3.14159265;

		printf("Precision specification of %.*f\n", 1, PI);
		printf("Precision specification of %.*f\n", 2, PI);
		printf("Precision specification of %.*f\n", 3, PI);
		printf("Precision specification of %.*f\n", 4, PI);
		printf("Precision specification of %.4f\n", PI);

		float x = 7.0, y = 9.0;
		printf("\nThe float division is : %.3f / %.3f = %.3f\n", x, y, x / y);

		double d = 12.45;
		printf("The double value is : %.3f \n", d);
		printf("The double value is : %.4f \n", d);


	}

}


