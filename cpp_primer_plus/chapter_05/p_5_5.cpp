#include <iostream>

using namespace std;
const int MONTH = 12;

int main()
{
    //    char *month[MONTH] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    string month[MONTH] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int num_mon[MONTH] = {};
    int sum = 0;
    
    for(int i=0; i<MONTH; i++)
    {
        int num_sale = 0;
        
        cout << "input the number of sales in " << month[i] << ": ";
        cin >> num_sale;
        
        num_mon[i] = num_sale;
        sum += num_sale;
    }
    
    for(int i=0; i<MONTH; i++)
    {
        cout << month[i] << "'s sale number is " << num_mon[i] << endl;
    }
    
    cout << "total sale number is " << sum << endl;
    
    return 0;
