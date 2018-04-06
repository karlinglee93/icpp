#include <iostream>

using namespace std;

int main()
{
    int row_num;
    
    cout << "Enter number of rows: ";
    cin >> row_num;
    
    char arr[row_num][row_num];
    
    for(int i=0; i<row_num; i++)
    {
        for(int j=0; j<row_num; j++)
        {
            if(j < row_num-i-1)
                arr[i][j] = '.';
            else
                arr[i][j] = '*';
        }
    }
    
    for(int i=0; i<row_num; i++)
    {
        for(int j=0; j<row_num; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
