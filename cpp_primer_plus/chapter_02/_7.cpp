#include <iostream>
using namespace std;
void _7_transform(int, int);

int main()
{
	int hours;
	int minutes;
	cout << "Enter the number of hours: " << endl;
	cin >> hours;
	cout << "Enter the number of minutes: " << endl;
	cin >> minutes;

	_7_transform(hours, minutes);

	return 0;
}
