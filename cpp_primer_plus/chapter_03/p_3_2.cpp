#include <iostream>
using namespace std;

int main()
{
	const int foot2inch = 12;
	const double inch2meter = 0.0254;
	const double kg2pound = 2.2;

	double height_foot = 0;
	double height_inch = 0;
	double total_height_inch;
	double weight_pound = 0;

	cout << "input your height: " << endl;
	cin >> height_foot >> height_inch;
	cout << "input your weight: " << endl;
	cin >> weight_pound;
	
	total_height_inch = height_foot * foot2inch + height_inch;
	cout << "your height is: " << total_height_inch << 
	" inches." << endl;

	double height_meter = total_height_inch * inch2meter;
	double weight_kg = weight_pound / kg2pound;

	double BMI = weight_kg / (height_meter * height_meter);
	cout << "BMI is: " << BMI << endl;

	return 0;
}
