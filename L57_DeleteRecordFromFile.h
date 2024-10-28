#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

namespace L57_DeleteRecordFromFile {

	void PrintFileContent(string FileName) {

		fstream MyFile;
		MyFile.open(FileName, ios::in);

		if (MyFile.is_open()) {

			string Line;
			while (getline(MyFile, Line)) {

				cout << Line << endl;

			}

			MyFile.close();

		}

	}

	void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent) {

		fstream MyFile;
		MyFile.open(FileName, ios::in);

		if (MyFile.is_open()) {

			string Line;
			while (getline(MyFile, Line)) {

				vFileContent.push_back(Line);
			}

			MyFile.close();
		}

	}

	void SaveDataFromVectorToFile(string FileName, vector<string> vFileContent) {

		fstream MyFile;
		MyFile.open(FileName, ios::out);

		if (MyFile.is_open()) {

			for (string Line : vFileContent) {

				if (Line != "") {

					MyFile << Line << endl;

				}

			}

			MyFile.close();
		}

	}

	void DeleteRecordFromFile(string FileName, string Record) {

		vector<string> vFileContent;

		LoadDataFromFileToVector(FileName, vFileContent);

		for (string& Line : vFileContent) {

			if (Line == Record) {

				Line = "";
			}
		}

		SaveDataFromVectorToFile(FileName, vFileContent);


	}

	void Task() {

		cout << "File Content Before Delete:\n";
		PrintFileContent("MyFile.txt");

		DeleteRecordFromFile("MyFile.txt", "Ali");

		cout << "\nFile Content After Delete:\n";
		PrintFileContent("MyFile.txt");


	}


}
