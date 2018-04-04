#include <iostream>

using namespace std;

struct Pizza
{
	string brand;
	double diameter;
	double weight;
};

int main()
{
	Pizza * pizza = new Pizza;
	pizza->diameter = 9;

	cout << "input brand: ";
	cin >> pizza->brand;
	cout << "input weight: ";
	cin >> pizza->weight;
	
	cout << "brand is " << pizza->brand << endl;
	cout << "diameter is " << pizza->diameter << endl;
	cout << "weight is " << pizza->weight << endl;

	delete pizza;

	return 0;
}
