#include <iostream>
using namespace std;

int main()
{
	long long w_p = 0;
	long long p = 0;
	double persent = 0.0;

	cout << "Enter the world's population: ";
	cin >> w_p;
	cout << "Enter the population of the US: ";
	cin >> p;

	persent = double(p)  / double(w_p) * 100;
	cout << "The population of the US is " << 
	persent << "% of the world population." << endl;

	return 0;
}
