#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    // insert code here...
    char first_name[128];
    char last_name[128];
    char letter;
    int age;
    
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What is your last name? ";
    cin >> last_name;
    cout << "What letter grade do you deserve? ";
    cin >> letter;
    cout << "What is your age? ";
    cin >> age;
    
    cout << "name: " << last_name << ", " << first_name << endl;
    cout << "grade: " << char(letter + 1) << endl;
    cout << "age: " << age << endl;
    
    return 0;
}

