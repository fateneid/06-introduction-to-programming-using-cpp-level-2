#pragma once

#include <iostream>
#include "L08h_MyFirstLib.h"
#include "L08h_Salary.h"

using namespace std;


namespace L08_CreateYourOwnLibrary {

	void Task()
	{

		L08h_MyFirstLib::FutureMessage();

		L08h_Salary::PrintYearlySalary(L08h_Salary::ClacYourYearlySalary(L08h_Salary::ReadNumber()));

	}

}


