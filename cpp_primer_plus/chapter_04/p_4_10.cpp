#include <iostream>

using namespace std;

int main()
{
	double * grades = new double[3];
	double sum = 0.0;
	int len = 0;
	double ave = 0.0;

	for(int i=0; i<3; i++)
	{
		cout << "the time: ";
		cin >> grades[i];

		sum += grades[i];
		len ++;
	}

	ave = sum / len;

	cout << "the times are " << len << endl;
	cout << "the average is " << ave << endl;

	return 0;
}
