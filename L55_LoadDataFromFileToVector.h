#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream> 
using namespace std;

namespace L55_LoadDataFromFileToVector {

	void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent) {

		fstream MyFile;
		MyFile.open(FileName, ios::in);

		if (MyFile.is_open()) {

			string Line;

			while (getline(MyFile, Line)) {

				vFileContent.push_back(Line);

			}


		}

		MyFile.close();
	}

	void Task() {

		vector<string> vFileContent;

		LoadDataFromFileToVector("MyFile.txt", vFileContent);

		for (string& Line : vFileContent) {
			cout << Line << endl;
		}


	}



}