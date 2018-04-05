#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[])
{
    // insert code here...
    char first_name[128];
    char last_name[128];
    
    cout << "Enter your first name: ";
    cin.getline(first_name, 128);
    cout << "Enter your last name: ";
    cin.getline(last_name, 128);
    
    cout << "Here's the information in a single string: " << strcat(strcat(last_name, ", "), first_name) << endl;
    
    return 0;
}
