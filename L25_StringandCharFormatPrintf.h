#pragma once

#include <iostream>
using namespace std;

namespace L25_StringandCharFormatPrintf {

	void Task()
	{

		char Name[] = "Faten Eid";
		char SchoolName[] = "Programming Advices";

		printf("Dear %s, How are you?\n\n", Name);
		printf("Welcome to %s School!\n\n", SchoolName);

		char c = 'F';

		printf("Setting the width of c :%*c \n", 1, c);
		printf("Setting the width of c :%*c \n", 2, c);
		printf("Setting the width of c :%*c \n", 3, c);
		printf("Setting the width of c :%*c \n", 4, c);
		printf("Setting the width of c :%*c \n", 5, c);


	}

}


