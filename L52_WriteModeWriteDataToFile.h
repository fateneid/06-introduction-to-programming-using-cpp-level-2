#pragma once

#include <iostream>
#include <fstream>
using namespace std;

namespace L52_WriteModeWriteDataToFile {

	void Task() {

		fstream MyFile;

		MyFile.open("MyFile.txt", ios::out); //Write Mode

		if (MyFile.is_open()) {

			MyFile << "Pla Pla Pla\nLa La La\nDone!";

			MyFile.close();


		}


	}


}
