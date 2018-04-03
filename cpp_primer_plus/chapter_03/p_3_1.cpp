#include <iostream>
using namespace std;

int main()
{
	const int foot2inch = 12;
	int inch_input = 0;
	int foot = 0;
	int inch_output = 0;

	cout << "___\b\b\b";	// \b是退格符
	cin >> inch_input;
	foot = inch_input / foot2inch;
	inch_output = inch_input % foot2inch;

	cout << foot << ", " << inch_output << endl;

	return 0;
}
