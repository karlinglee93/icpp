#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    int num = 0;
    
    cout << "Enter words (to stop, type the word done: " << endl;
    while(cin >> word)
    {
        if(word != "done")
            num++;
        else
            break;
    }
    cout << "You entered a total of " << num << " words." << endl;
    
    return 0;
}

