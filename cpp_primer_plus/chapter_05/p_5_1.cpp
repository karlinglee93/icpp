#include <iostream>

using namespace std;

int main()
{
    int input_1 = 0;
    int input_2 = 0;
    int sum = 0;
    
    cout << "input two int: " <<endl;
    cout << "the first one is " ;
    cin >> input_1;
    cout << "the second one is ";
    cin >> input_2;
    
    for(int i=input_1, j=input_2; i<=j; i++)
    {
        sum += i;
    }
    
    cout << "sum is " << sum << endl;
    
    return 0;
}

