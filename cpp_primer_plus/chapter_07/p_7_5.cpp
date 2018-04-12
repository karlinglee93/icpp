#include <iostream>

using namespace std;
int factorial(int input)
{
	int fac = 1;
	
	if(input == 0 || input == 1)
		return fac;
	else
	{
		for(int i=1; i<=input; i++)
		{
			fac *= i;
		}
		return fac;
	}
}

int main()
{
	int input;

	cout << "Enter a number: ";
	while(cin >> input && input >= 0)
	{
		cout << "the factorial of " << input << " is " << factorial(input) << endl;
		cout << "Enter a number (q to quit) " << endl;
	}

	return 0;
}
