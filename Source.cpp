#include <iostream>
#include<string>
#include<fstream>
#include"FileFeader.h"
#include"ASCIIFileReader.h"
#include"BinaryFileReader.h"
#include <bitset>

using namespace std;

int main()
{
	
	
	BinaryFileReader f1;
	f1.Display("Text.txt");

	system("pause");
	return 0;
}

