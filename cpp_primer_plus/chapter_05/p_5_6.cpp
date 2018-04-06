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
        int sum_year = 0;
        
        for(int j=0; j<MONTH; j++)
        {
            int num_sale = 0;
            
            cout << "input the number of sales in " << month[j] << ", NO." << i+1 << " year " << ": ";
            cin >> num_sale;
            
            num_mon[i][j] = num_sale;
            sum_year += num_sale;
        }
        num_year[i] = sum_year;
        sum += sum_year;
    }
    
    for(int i=0; i<YEAR; i++)
    {
        cout << "the sale number in " << i+1 << " year is " << num_year[i] << endl;
    }
    cout << "total sale number in " << YEAR << " years are " << sum << endl;
    
    return 0;
}
