#include <iostream>

using namespace std;
long double probability(unsigned numbers, unsigned picks);

int main()
{
	double total, choices;
	long double t_probability = 0.0;

	cout << "Enter the total number of choices and "<< endl;
	cout << "the number of picks allowed in the first field number: " << endl;
	cin >> total >> choices;

	t_probability = probability(total, choices);

	cout << "Enter the total number of choices and "<< endl;
	cout << "the number of picks allowed in the second field number: " << endl;
	cin >> total >> choices;
		
	t_probability *= probability(total, choices);

	cout << "You hace one chance in " << t_probability << " of winning." << endl;
	cout << "bye " << endl;

	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for(n = numbers, p = picks; p>0; n--, p--)
		result = result * n / p;
	return 1.0 / result;
}
