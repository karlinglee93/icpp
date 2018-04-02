#include <iostream>
using namespace std;
double _6_transform(double);

int main()
{
	double light_years;
	double astronomical;

	cout << "Enter the number of light years: " <<endl;
	cin >> light_years;
	
	astronomical = _6_transform(light_years);
	
	cout << light_years << " light years = " 
	<< astronomical << " astronomical units. " << endl;

	return 0;
}
