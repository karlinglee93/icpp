// 看的答案

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char word[128];
    int num = 0;
    
    cout << "Enter words (to stop, type the word done: " << endl;
    while(cin >> word)
    {
        if(strcmp(word, "done"))
            num++;
        else
            break;
    }
    cout << "You entered a total of " << num << " words." << endl;
    
    return 0;
}
