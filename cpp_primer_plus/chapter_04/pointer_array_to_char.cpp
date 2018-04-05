#include <iostream>

using namespace std;
const int MAX = 4;

int main ()
{
const char *names[MAX] = {
"Zara Ali",
"Hina Ali",
"Nuha Ali",
"Sara Ali",
};

for (int i = 0; i < MAX; i++)
{
cout << "Value of names[" << i << "] = ";
cout << names[i] << endl;   // 如果是 *names[i] 则打印字符串的首字母!
// 指向字符的指针数组
// 打印变量值时"用name[i] “ 和其他情况下”用*name[i] “ 不同
}

return 0;
}

