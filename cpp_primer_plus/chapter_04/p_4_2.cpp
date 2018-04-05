#include <iostream>
//#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    // insert code here...
    string first_name;
    string last_name;
    char letter;
    int age;
    
    cout << "What is your first name? ";
    getline(cin, first_name);                      //getline() 和cin.getline() 的区别
    cout << "What is your last name? ";
    getline(cin, last_name);
    cout << "What letter grade do you deserve? ";
    cin >> letter;
    cout << "What is your age? ";
    cin >> age;
    
    cout << "name: " << last_name + ", " + first_name << endl;
    cout << "grade: " << char(letter + 1) << endl;
    cout << "age: " << age << endl;
    
    return 0;
}
