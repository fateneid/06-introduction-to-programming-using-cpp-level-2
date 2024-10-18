#pragma once

#include <iostream>
using namespace std;

namespace L23_IntegerFormatPrintf {

	void Task()
	{

		int Page = 1, TotalPages = 10;

		printf("The page number = %d \n", Page);
		printf("You are in page %d of %d \n", Page, TotalPages);

		printf("The page number =  %0*d \n", 2, Page);
		printf("The page number =  %0*d \n", 3, Page);
		printf("The page number =  %0*d \n", 4, Page);
		printf("The page number =  %0*d \n", 5, Page);

		int Number1 = 20, Number2 = 30;
		printf("The Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);

	}

}


