#pragma once

#include <iostream>
#include <fstream>
using namespace std;

namespace L53_AppendModeAppendDataToFile {

	void Task() {

		fstream MyFile;

		MyFile.open("MyFile.txt", ios::out | ios::app); //Append Mode

		if (MyFile.is_open()) {

			MyFile << "\nHi, this is a new line\n";
			MyFile << "Hi, this is another new line\n";

			MyFile.close();


		}


	}


}

