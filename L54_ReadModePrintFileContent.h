#pragma once

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

namespace L54_ReadModePrintFileContent {

	void PrintFileContent(string FileName) {

		fstream MyFile;
		MyFile.open(FileName, ios::in); //Read Mode

		if (MyFile.is_open()) {

			string Line;

			while (getline(MyFile,Line))
			{

				cout << Line << endl;

			}


		}

		MyFile.close();

	}

	void Task() {

		PrintFileContent("MyFile.txt");

	}

}