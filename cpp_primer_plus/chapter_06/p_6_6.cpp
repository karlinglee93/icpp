#include <iostream>
#include <string>

using namespace std;
struct person
{
    string name;
    double money;
};

int main()
{
    int n_person = 0;
    
    cout << "input number of person: ";
    cin >> n_person;
    
    person *p = new person[n_person];
    
    for(int i=0; i<n_person; i++)
    {
        cin.get();
        cout << "input name: ";
        getline(cin, p[i].name);
        cout << "input money: ";
        cin >> p[i].money;
    }
    
    int len_1 = 0;
    cout << "Grand Patrons" << endl;
    for(int i=0; i<n_person; i++)
    {
        if(p[i].money > 10000)
        {
            cout << p[i].name << ", " << p[i].money << endl;
            len_1 ++;
        }
    }
    if(len_1 == 0)
        cout << "none" << endl;
    
    int len_2 = 0;
    cout << "Patrons" << endl;
    for(int i=0; i<n_person; i++)
    {
        if(p[i].money <= 10000)
        {
            cout << p[i].name << endl;
            len_2 ++;
        }
    }
    if(len_2 == 0)
        cout << "none" << endl;
    
    delete [] p;
    
    return 0;
}
