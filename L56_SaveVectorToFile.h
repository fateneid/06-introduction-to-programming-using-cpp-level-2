#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

namespace L56_SaveVectorToFile {

	void SaveVectorToFile(string FileName, vector<string> vFileContent) {

		fstream MyFile;

		MyFile.open(FileName, ios::out);

		if (MyFile.is_open()) {

			for (string& Line : vFileContent) {

				if (Line != "") {

					MyFile << Line << endl;
				}


			}

			MyFile.close();


		}


	}

	void Task() {

		vector<string> vFileContent{ "Ali", "Shadi","Maher","Fadi","Lama" };

		SaveVectorToFile("MyFile.txt", vFileContent);

	}

}
