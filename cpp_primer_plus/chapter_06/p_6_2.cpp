// 看的答案

#include <iostream>
#include <array>

using namespace std;
const int MAX = 10;

int main()
{
    array<double, MAX> arr;
    double donation =0.0;
    int len = 0;
    double sum = 0.0;
    double ave = 0.0;
    int num = 0;
    
    cout << "input something (! isdigit means end)" << endl;
    
    while(len < 10 && cin >> donation)      // 为什么当cin >> donation 中输入非数字时，布尔值为0?
        // 答: 要求输入double 型, 结果输入其他型以后, 条件(cin >> donation) 为false, 故退出循环.
    {
        arr[len] = donation;
        sum += arr[len++];
    }
    
    if(len != 0)
	ave = sum / len;
    
    for(int i=0; i<len; i++)
    {
        if(arr[i] > ave)
            num++;
    }
    
    cout << "ave is " << ave << endl;
    cout << "the num of (arr > ave) is " << num << endl;
    
    return 0;
}


