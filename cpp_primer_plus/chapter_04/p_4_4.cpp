#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
// insert code here...
string first_name;
string last_name;

cout << "Enter your first name: ";
cin >> first_name;
cout << "Enter your last name: ";
cin >> last_name;

cout << "Here's the information in a single string: " << last_name + ", " + first_name << endl;

return 0;
}
