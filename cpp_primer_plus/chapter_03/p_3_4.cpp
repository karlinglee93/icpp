#include <iostream>
using namespace std;

int main()
{
	const int per_hours = 24;
	const int per_minutes = 60;
	const int per_seconds = 60;

	long total_seconds = 0;
	
	int days = 0;
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	
	int rest_seconds = 0;

	cout << "Enter the number of seconds: ";
	cin >> total_seconds;

	days = total_seconds / (per_hours * per_minutes * per_seconds);
	rest_seconds = total_seconds % 
	(per_hours * per_minutes * per_seconds);

	hours = rest_seconds / (per_minutes * per_seconds);
	rest_seconds %= per_minutes * per_seconds;

	minutes = rest_seconds / per_minutes;
	rest_seconds %= per_minutes;

	seconds = rest_seconds;

	cout << total_seconds << " seconds = " << 
	days << " days, " << hours << " hours, " << 
	minutes << " minutes, " << seconds << 
	" seconds" << endl;

	return 0;
}
