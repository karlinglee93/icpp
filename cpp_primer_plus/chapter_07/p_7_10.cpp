// 看的答案

#include <iostream>

using namespace std;
double add(double x, double y)
{
    return x + y;
}

double multiply(double x, double y)
{
    return x * y;
}

double calculate(double x, double y, double (*fun)(double, double))     // 指向函数的指针
{
    return fun(x, y);
}

int main()
{
    double x = 0.0;
    double y = 0.0;
    
    cout << "Enter two double number: " << endl;
    while(cin >> x >> y)
    {
        cout << "Call add, the result of " << x << " and " <<
        y << " is " << calculate(x, y, add) << endl;      // 注意是add ，不是add(x, y)
        cout << "Call multiply, the result of " << x << " multiply " <<
        y << " is " << calculate(x, y, multiply) << endl;
        
        cout << "Enter the next two double number: " << endl;
    }
    
    
    return 0;
}

