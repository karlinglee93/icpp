#include <iostream>

using namespace std;

int main ()
{
    int var = 20; // 实际变量的声明
    int *ip; // 指针变量的声明 // * 指定了ip 变量是指针
    
    ip = &var; // 在指针变量中存储 var 的地址 // ip变量是指针，它指向了一个地址，故var 前面加&
    
    cout << "Value of var variable: ";
    cout << var << endl; // var 不是地址, 输出不是地址
    
    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl; // ip 是指针,  指向一个地址, 输出是地址
    
    // *ip 是访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
    
    return 0;
}
