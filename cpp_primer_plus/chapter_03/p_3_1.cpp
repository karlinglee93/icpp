#include <iostream>
using namespace std;

int main()
{
	const double alpha = 0.0833333;
	int inches = 0;
	double feet = 0;

	cout << "_";
	cin >> inches;
	feet = inches * alpha;

	cout << feet << ", " << inches << endl;

	return 0;
}
