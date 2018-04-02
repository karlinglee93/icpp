#include <iostream>
using namespace std;

int main()
{
	int age;
	int months;
	cout << "Enter your age: " << endl;
	cin >> age;

	months = 12 * age;
	cout << "your age contains " << months << 
	" months!" << endl;

	return 0;
}
