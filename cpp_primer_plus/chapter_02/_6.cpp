#include <iostream>
using namespace std;
double _6_transform(double);

int main()
{
	double input;
	cout << "Enter the number of light years: " <<endl;
	cin >> input;
	
	double output = _6_transform(input);
	
	cout << input << " light years = " 
	<< output << " astronomical units. ";
	
	return 0;
}
