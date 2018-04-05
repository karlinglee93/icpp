
#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
    int  var[MAX] = {10, 100, 200};
    int  *ptr;
    
    // 指针中的数组地址
    ptr = var; // 注意，数组的第一个元素可能有些不一样
               // 不是 ptr = &var，而是ptr = var;
               // 可能是因为数组名var 表示数组第一个元素的地址
               // ptr = &var 时报错
    
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        
        // 移动到下一个位置
        ptr++;  // 其地址值不是加1 ,
                // 应该是+4 (64位 int), 因为在不影响内存位置中实际值的情况下， 移动指针到下一个内存地址
    }
    
    return 0;
}

