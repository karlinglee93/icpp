#include <iostream>

using namespace std;
const int SLEM = 30;
struct student
{
    char fullname[SLEM];
    char hobby[SLEM];
    int ooplevel;
};

int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter student #" << i+1 << " name: ";
        cin.getline(pa[i].fullname, SLEM);
        
        if (pa[i].fullname[0] == '-')
            break;
        cout << "Enter student #" << i+1 << " hobby: ";
        cin.getline(pa[i].hobby, SLEM);
        cout << "Entre student #" << i+1 << " ooplevel: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    
    return i;
}

void display1(student st)     // 47行输入ptr_stu[i]，不是ptr_stu[]，故此行形参为student st，不是student st[]
{
    cout << "fullname is " << st.fullname << endl;
    cout << "hobby is " << st.hobby << endl;
    cout << "ooplever is " << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << "fullname is " << ps->fullname << endl;
    cout << "hobby is " << ps->hobby << endl;
    cout << "ooplever is " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "fullname is " << pa[i].fullname << endl;
        cout << "hobby is " << pa[i].hobby << endl;
        cout << "ooplever is " << pa[i].ooplevel << endl;
    }
}
int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    
    while(cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    
    delete [] ptr_stu;
    cout << "Done" << endl;
    return 0;
}

