#pragma once
#include <iostream>
#include<string>
#include"FileFeader.h"
#include <fstream>
#include<bitset>
using namespace std;

class BinaryFileReader : public FileReader
{
public:

	void Display(string path)override
	{
		char data;
		ifstream fin(path);
		while (fin.get(data))
		{
			bitset<8> set(data);
			cout << set.to_string()<< endl;
			cout << set;
		}
	}
};
