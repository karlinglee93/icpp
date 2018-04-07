#include <iostream>

using namespace std;
const int MONTH = 12;
const int YEAR = 3;

int main()
{
    string month[MONTH] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int num_mon[YEAR][MONTH] = {};
    int num_year[YEAR] = {};
    
    int sum = 0;
    
    for(int i=0; i<YEAR; i++)
    {
        for(int j=0; j<MONTH; j++)
        {
            cout << "input the number of sales in " << month[j] << ", NO." << i+1 << " year " << ": ";
            cin >> num_mon[i][j];
            
            num_year[i] += num_mon[i][j];
        }
    }
    
    for(int i=0; i<YEAR; i++)
    {
        cout << "the sale number in " << i+1 << " year is " << num_year[i] << endl;
        sum += num_year[i];
    }
    cout << "total sale number in " << YEAR << " years are " << sum << endl;
    
    return 0;
}
