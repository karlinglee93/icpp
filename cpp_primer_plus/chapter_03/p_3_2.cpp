#include <iostream>
using namespace std;

int main()
{
	const int feet2inches = 12;
	const double inches2meters = 0.0254;
	const double pound2kg = 1.0 / 2.2;

	int feet = 0;
	int inches = 0;
	double iinches;
	int pound = 0;

	cout << "input your height: " << endl;
	cin >> feet >> inches;
	cout << "input your weight: " << endl;
	cin >> pound;
	
	iinches = feet * feet2inches + inches;
	cout << "your height is: " << iinches << " inches." << endl;

	double meters = iinches * inches2meters;
	double kg = pound * pound2kg;

	double BMI = kg / (meters * meters);
	cout << "BMI is: " << BMI << endl;

	return 0;
}
