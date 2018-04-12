#include <iostream>

using namespace std;
long long factorial(unsigned input)
{
    //    int fac = 1;
    
    if(input == 0 || input == 1)
        //        return fac;
        return 1;
    else
        //    {
        //        for(int i=1; i<=input; i++)
        //        {
        //            fac *= i;
        //        }
        //        return fac;
        //    }
        return input * factorial(input - 1);
    // 反复调用factorial(), 当input < 0时不会停止调用！
    // 而是input 减少到1时，return 1了，就不继续走return input * factorial(input - 1) 了。
}

int main()
{
    int input;
    
    cout << "Enter a number: ";
    while(cin >> input && input >= 0)
    {
        cout << "the factorial of " << input << " is " << factorial(input) << endl;
        cout << "Enter a number (q to quit) " << endl;
    }
    
    return 0;
}


