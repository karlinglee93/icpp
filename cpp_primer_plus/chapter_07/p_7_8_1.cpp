// 看的答案

#include <iostream>

using namespace std;
const int Seasons = 4;
const char * Snames[] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double * pa);     // * pa 是一维数组的意思。一维数组不加[]，即不是 * pa[]
void show(double * da);

int main()
{
    double expenses[Seasons];
    fill(expenses);     // 形参是* pa，故实参是expenses，不是* expenses。
    show(expenses);
    
    return 0;
}

void fill(double * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(double * da)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

