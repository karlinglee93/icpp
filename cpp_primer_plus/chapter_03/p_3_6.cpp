#include <iostream>
using namespace std;

int main()
{
	double mile = 0;
	double gallon = 0;

	cout << "input mile and gallon: ";
	cin >> mile >> gallon;
	
	double m_p_g = mile / gallon;
	cout << "mile per gallon: " << m_p_g << endl;	

	return 0;
}
