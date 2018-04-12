// 看的答案

#include <iostream>

using namespace std;
const int MAX = 5;

// 遇到错误输入，则终止输入。遇到负数，则结束输入。
int fill_array(double * ar_begin, double * ar_end)
{
	double temp;
	int i;
	double * ar_temp;
	for (ar_temp = ar_begin; ar_temp < ar_end; ar_temp++)
	{
		cout << "Enter value #" << (i+1) << ": ";
		cin >> temp;
		if (!cin)	// bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
		{
			break;
		}
		* ar_temp  = temp;
		i++;
	}

	return i;
}

void show_array(const double * ar_begin, const double * ar_end)
{
	const double * ar_temp;
	unsigned int i = 0;
	for (ar_temp = ar_begin; ar_temp < ar_end; ar_temp++)
	{
		cout << "Property #" << (i+1) << ": $";
		cout << *ar_temp << endl;
		i++;
	}
}

void revalue(double r, double * ar_begin, double * ar_end)
{
	double * ar_temp;
	for (ar_temp = ar_begin; ar_temp < ar_end; ar_temp++)
	{
		*ar_temp *= r;
	}
}

int main()
{
	double properties[MAX];

	int size = fill_array(properties, properties + MAX);
	show_array(properties, properties + size);
	if (size > 0)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, properties + size);
		show_array(properties, properties + size);
	}
	cout << "Done.\n";

	return 0;
}
