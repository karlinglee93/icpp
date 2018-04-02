#include <iostream>
using namespace std;

void _5_transform()
{
	double Celsius;
	double Fahrenheit;

	cout << "Please enter a Celsius value: " << endl;
	cin >> Celsius;

	Fahrenheit = 1.8 * Celsius + 32.0;
	cout << Celsius << " degrees Celsius is " <<
	Fahrenheit << " degrees Fahrenheit." <<endl;

	return;
}
