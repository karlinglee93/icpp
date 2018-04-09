// 看的答案

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char ch;
	int num = 0;

	ifstream infile;
	infile.open("p_6_8_test.txt");

	cout << "Reading from the file..." << endl;
	while((ch = infile.get())  != EOF)	// infile.get() 和EOF
	{
		cout << ch;
		num++;
	}

	cout << "There are " << num << " characters in this file! " << endl;

	infile.close();

	return 0;
}
