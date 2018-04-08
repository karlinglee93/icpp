#include <iostream>

using namespace std;
void showmenu();

int main()
{
    //    int choice;           // 输入为char 类型时，由于char 不能转为int ，故choice == 0，且不能再cin >> choice 了
    char choice;                // 输入为‘int’ 类型（其实仍为char 类型）时，choice == ‘int'，还可以cin >> choice
    
    showmenu();
    cout << "Please enter a a, b, c, or d: ";
    
    while(cin >> choice)
    {
        switch (choice)
        {
            case 'a':
            case 'A':
                cout << "a maple is an apple. " << endl;
                break;
            case 'b':
            case 'B':
                cout << "a maple is a banana. " << endl;
                break;
            case 'c':
            case 'C':
                cout << "a maple is a circle. " << endl;
                break;
            case 'd':
            case 'D':
                cout << "a maple is a doom. " << endl;
                break;
            default:
                cout << "Please enter a a, b, c, or d: ";
                continue;
        }
        break;
    }
    
    return 0;
}

void showmenu()
{
    cout << "Please enter one of the following choices: " << endl;
    cout << "a) apple               b)banana" << endl;
    cout << "c) circle              d)doom" << endl;
}

