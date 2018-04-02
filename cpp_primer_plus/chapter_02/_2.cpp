#include <iostream>
using namespace std;

int main()
{
	int ilong;
	int iyard;
	cout << "input a distance in long: " << endl;
	cin >> ilong;
	iyard = 220 * ilong;
	cout << "the distance in yards is " << iyard << endl;
	
	return 0;
}
