#pragma once
#include <iostream>
#include<string>
#include"FileFeader.h"
#include<fstream>
using namespace std;

class ASCIIFileReader : public FileReader
{
public:
	ASCIIFileReader() { }


	void Display(string path) override
	{
		const int MAXLEN_STR = 256;
		const int ROW_COUNT = 100;
		char S[ROW_COUNT][MAXLEN_STR];
		int str_num = 0;

		ifstream fin(path);
		while (!fin.eof())
		{
			fin.getline(S[str_num++], MAXLEN_STR);
		}

		fin.close();
		for (int i = 0; i < str_num; i++) {
			cout <<(int) S[i] << endl;
		}
		cin.get();

	}


};
