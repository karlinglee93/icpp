#include <iostream>
#include <iomanip>	// 引入setw()

using namespace std;
void showmenu();

int main()
{
    //    int choice;           // 输入为char 类型时，由于char 不能转为int ，故choice == 0，且不能再cin >> choice 了
    char choice;                // 输入为‘int’ 类型（其实仍为char 类型）时，choice == ‘int'，还可以cin >> choice
    bool exit = false;	
    	
    showmenu();
    cout << "Please enter a a, b, c, or d: ";
    
    while(!exit && cin >> choice)	// 加了一个exit, 效率了不少!
    {
        switch (choice)
        {
            case 'a':
            case 'A':
                cout << "a maple is an apple. " << endl;
                exit = true;
		break;
            case 'b':
            case 'B':
                cout << "a maple is a banana. " << endl;
                exit = true;
	        break;
            case 'c':
            case 'C':
                cout << "a maple is a circle. " << endl;
                exit = true;
		break;
            case 'd':
            case 'D':
                cout << "a maple is a doom. " << endl;
                exit = true;
		break;
            default:
                cout << "Please enter a a, b, c, or d: ";
        }
    }
    
    return 0;
}

void showmenu()
{
	cout << "Please enter one of the following choices: " << endl;
	cout.flags(ios::left);	// flags() 对cout 进行格式化, ios::left 为向左对齐
	cout << setw(20) << "a) apple" << "b) banana" << endl;	// setw() 的默认格式为向右对齐
    	cout << setw(20) << "c) circle" << "d) doom" << endl;
}

