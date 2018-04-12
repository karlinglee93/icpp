// 看的答案

#include <iostream>

using namespace std;
const int Seasons = 4;
const char * Snames[] = {"Spring", "Summer", "Fall", "Winter"};
struct Expense
{
    double expense[];
};

void fill(struct Expense * exp)     // 不懂什么要用指针，因为exp 里面是一个‘数组’
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> exp->expense[i];
    }
}

void show(struct Expense * exp)     // 不懂什么要用指针
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << exp->expense[i] << endl;
        total += exp->expense[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

int main()
{
    struct Expense * exp = new struct Expense;      //// 不懂什么要用new
    fill(exp);      //不懂为什么参数是exp，不是&exp
    show(exp);      //不懂为什么参数是exp，不是&exp
    
    delete exp;
    
    return 0;
}

