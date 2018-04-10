#include <iostream>

using namespace std;
double func(double x, double y)
{
    return 2.0 * x * y / (x + y);
}

int main()
{
    double input_1 = 0.0;
    double input_2 = 0.0;
    double ave = 0.0;
    
    cout << "Enter two numbers: " << endl;
    cout << "The first one is: ";
    cin >> input_1;
    cout << "The second one is: ";
    cin >> input_2;
    
    while(input_1 != 0 && input_2 != 0)
    {
        ave = func(input_1, input_2);
        cout << "ave is: " << ave << endl;
        
        cout << "Enter two numbers: " << endl;
        cout << "The first one is: ";
        cin >> input_1;
        cout << "The second one is: ";
        cin >> input_2;
    }
    cout << "Done! " << endl;
    
    return 0;
}

