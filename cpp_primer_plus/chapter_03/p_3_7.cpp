#include <iostream>
using namespace std;

int main()
{
    const double _100km2mile = 62.14;
    const double gallon2l = 3.875;
    
    double l_per_100km;
    double mile_per_gallon;
    
    cout << "input l_per_100km: ";
    cin >> l_per_100km;
    
    mile_per_gallon = _100km2mile / (l_per_100km / gallon2l);
    cout << "mile_per_gallon is: " << mile_per_gallon << endl;
    
    return 0;
}
