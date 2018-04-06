#include <iostream>

using namespace std;

int main()
{
    double sum = 0.0;
    
    while(1)
    {
        double input = 0.0;
        
        cout << "input: " << endl;
        cin >> input;
        
        if(input == 0)
            break;
        
        sum += input;
        cout << "sum is: " << sum << endl << endl;
    }
    
    cout << endl;
    cout << "total sum is: " << sum << endl;
    
    return 0;
}
