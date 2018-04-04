#include <iostream>

using namespace std;

struct CandyBar
{
	string brand;
	double weight;
	int calorie;
};

int main()
{
	CandyBar * candybar = new CandyBar[3];
	
	for(int i=0; i<3; i++)
	{
		cout << "input brand ";
		cin >> candybar[i].brand;
		cout << "input weight ";
		cin >> candybar[i].weight;
		cout << "input calorie ";
		cin >> candybar[i].calorie;
	}

	for(int i=0; i<3; i++)
	{
		cout << "brand is " << candybar[i].brand << endl;
		cout << "weight is " << candybar[i].weight << endl;
		cout << "calorie is " << candybar[i].calorie << endl;
	}

	delete [] candybar;	

	return 0;
}
