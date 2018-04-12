#include <iostream>

using namespace std;
int Fill_array(double arr[], int length)
{
	int i = 0;

	cout << "Enter a double number: (q to quit)" << endl;
	while(cin >> arr[i] && i < length)
	{
		i++;
	}
	cout << "You have input " << i << " values; " << endl;

	return i;
}

void Show_array(double arr[], int length)
{
	cout << "The arr is:i " << endl;
	for(int i=0; i<length; i++)
	{
		cout << arr[i] << endl;
	}
}

void Reverse_array(double arr[], int f_elem, int size)
{
	double temp = 0.0;

	cout << "Now reverse the arr: " << endl;
	for(int i=f_elem; i<size/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size-1-i];
		arr[size-1-i] = temp;
	}
}

int main()
{
	int length = 10;
	double arr[length];
	
	int size =  Fill_array(arr, length);
	Show_array(arr, size);
	Reverse_array(arr, 0, size);
	Show_array(arr, size);
	Reverse_array(arr, 1, size);
	Show_array(arr, size);

	return 0;
}
