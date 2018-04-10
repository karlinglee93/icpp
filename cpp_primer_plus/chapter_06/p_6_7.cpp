// 看的答案

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    int n_vowel = 0;
    int n_consonant = 0;
    int n_other = 0;
    string str;		// string str 是输入的单词
    
    cout << "Enter words (q to quit): " << endl;
    
    while(getline(cin, str))
    {
        if(str.length() == 1 && str[0] == 'q')		// str.length() 查看字符串长度, str[0] 是str 的首字母, 且为ch 类型
            break;
        if(! isalpha(str[0]))
            n_other++;
        else if(str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' ||
                str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U')
            n_vowel++;
        else
            n_consonant++;
    }
    
    cout << n_vowel << " words beginning with vowels" << endl;
    cout << n_consonant << " words beginning with consonant" << endl;
    cout << n_other << " others" << endl;
    
    return 0;
}
