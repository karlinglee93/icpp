// 看的答案

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string filename;
	char ch;
	int num = 0;

	cout << "Enter the file name: ";
	getline(cin, filename);

	ifstream infile;
	infile.open(filename.c_str());		// filename.c_str() 输入文件名字的时候用

	cout << "Reading from the file..." << endl;
	while((ch = infile.get())  != EOF)	// infile.get() 逐个字符读取, EOF 为文件的末尾
	{
		cout << ch;
		num++;
	}

	cout << "There are " << num << " characters in this file! " << endl;

	infile.close();

	return 0;
}
