#include <iostream>

using namespace std;
const double init_money = 100.0;

int main()
{
    double Daphne = init_money;
    double Cleo = init_money;
    int years = 0;
    
    while(1)
    {
        if(Daphne < Cleo)
            break;
        
        Daphne += 0.10 * 100;
        Cleo += 0.05 * Cleo;
        years ++;
    }
    
    cout << "years is " << years << endl;
    cout << "Daphne is " << Daphne << endl;
    cout << "Cleo is " << Cleo << endl;
    
    return 0;
}
