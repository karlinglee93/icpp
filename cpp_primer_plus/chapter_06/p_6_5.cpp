#include <iostream>

using namespace std;

int main()
{
    double income = 0.0;
    double tax = 0.0;
    
    cout << "input your income: " << endl;
    
    while(cin >> income && income >= 0)
    {
        if(income <= 5000)
            tax = 0;
        else if(income <= 15000)
            tax = 5000 * 0 + (income - 5000) * 0.1;
        else if(income <= 35000)
            tax = 5000 * 0 + 10000 * 0.1 + (income - 15000) * 0.15;
        else if(income > 35000)
            tax = 5000 * 0 + 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
        
        cout << "tax is " << tax << endl;
        cout << "input your income: " << endl;
    }
    cout << "Done! " << endl;
    
    return 0;
}
