#include <iostream>
using namespace std;

int main()
{
	const double alpha = 1.0 / 60;

	int degrees = 0;
	int minutes = 0;
	int seconds = 0;
	double idegrees = 0;
	
	cout << "Enter a latitude in degrees, minutes, and seconds: " << 
	endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the miutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	idegrees = degrees + minutes * alpha + seconds * alpha * alpha;

	cout << degrees << " degrees, " << minutes << " minutes, " << 
	seconds << " seconds = " << idegrees << " degrees" << endl;

	return 0;
}
