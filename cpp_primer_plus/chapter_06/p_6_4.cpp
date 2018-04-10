#include <iostream>
#include <iomanip>

using namespace std;
void showmenu();
struct bop{
    char fullname[128];
    char title[128];
    char bopname[128];
    int preference;
};
void f_name(const bop *bop_arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << bop_arr[i].fullname << endl;
    }
}
void title(const bop *bop_arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << bop_arr[i].title << endl;
    }
}
void b_name(const bop *bop_arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << bop_arr[i].bopname << endl;
    }
}
void preference(const bop *bop_arr, int size)
{
    for(int i=0; i<size; i++)
    {
        if(bop_arr[i].preference == 0)
            cout << bop_arr[i].fullname << endl;
        else if(bop_arr[i].preference == 1)
            cout << bop_arr[i].title << endl;
        else if(bop_arr[i].preference == 2)
            cout << bop_arr[i].bopname << endl;
    }
}

int main()
{
    const bop bop_arr[5] = {
    	{"f_name_1", "title_1", "b_name_1", 0},
        {"f_name_2", "title_2", "b_name_2", 1},
        {"f_name_3", "title_3", "b_name_3", 2},
	{"f_name_4", "title_4", "b_name_4", 1},
	{"f_name_5", "title_5", "b_name_5", 0}
};
    char choice;
   
    showmenu();
    cout << "Enter your choice: ";
    
    while(cin >> choice && choice != 'q')
    {
        switch (choice) {
            case 'a':
                f_name(bop_arr, 5);
                break;
            case 'b':
                title(bop_arr, 5);
                break;
            case 'c':
                b_name(bop_arr, 5);
                break;
            case 'd':
                preference(bop_arr, 5);
                break;
            default:
                break;
        }
        cout << "Next choice: ";
    }
    cout << "Bye!" << endl;
    
    return 0;
}

void showmenu()
{
    cout << "Benevolent Order of Proframers Report" << endl;
    cout << left << setw(30) << "a. display by name"<< "b. display by title" << endl;
    cout << left << setw(30) << "c. display by bopname" << "d. display by preference" << endl;
    cout << left << setw(30) << "q. quit" << endl;
}
