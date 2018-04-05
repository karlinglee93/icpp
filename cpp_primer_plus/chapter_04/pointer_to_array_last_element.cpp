#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
    int  var[MAX] = {10, 100, 200};
    int  *ptr;
    
    // 指针中最后一个元素的地址
    ptr = &var[MAX-1];  // 和指针指向数组的第一个元素又不同
    // 可能因为数组中除了第一个元素以外，表示其他元素都应该这样做
    // ptr = var[MAX-1] 时报错
    
    for (int i = MAX; i > 0; i--)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        
        // 移动到下一个位置
        ptr--;
    }
    
    return 0;
}
