// 看的答案

#include <iostream>

using namespace std;
void input(double * grade, int * number)    // int * number 记录number 的数值
{
    cout << "Enter grades ('-1' means end): " << endl;
    for(int i=0; i<10; i++)
    {
        cin >> grade[i];
        if(grade[i] == -1)
            break;
        else
            (*number)++;
    }
}
void display(const double * grade, int number)      // 加const ，防止数组变动
{
    cout << "The grades are: " << endl;
    for(int i=0; i<number; i++)
    {
        cout << grade[i] << endl;
    }
}
void ave(const double * grade, int number)      // 加const ，防止数组变动
{
    double ave = 0.0;
    
    for(int i=0; i<number; i++)
    {
        ave += grade[i] / number;
    }
    cout << "The ave is: " << number << endl;
}

int main()
{
    int number = 0;
    double grade[10];
    
    input(grade, &number);  // 将number 的引用代入, 以便记录number 的数值
    display(grade, number);
    ave(grade, number);
    
    return 0;
}

