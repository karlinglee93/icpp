#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	double number[10];
	char donation =0.0;
	int len = 0;
	double ave = 0.0;
	int num = 0;

	while(cin.get(donation) && isdigit(donation))
	{
		number[len++] = donation;
	}

	for(int i=0; i<len; i++)
	{
		ave += number[i] / len;
	}

	for(int i=0; i<len; i++)
	{
		if(number[i] > ave)
			num++;
	}

	cout << "ave is " << ave << endl;
	cout << "the num > ave is " << num << endl;

	return 0;
}
