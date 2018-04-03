#include <iostream>

using namespace std;

struct CandyBar
{
string brand;
double weight;
int calorie;
};

int main(int argc, const char * argv[])
{
// insert code here...
CandyBar candybar[3] = {
{"Mocha Munch", 2.3, 350},
{"H&M", 3.0, 370},
{"QQ", 2.3, 250}
};

int i;
int j = 3;

for(i = 0; i < j; i++)
{
cout << "brand is " <<candybar[i].brand << endl;
cout << "weight is " << candybar[i].weight << endl;
cout << "calorie is " << candybar[i].calorie << endl << endl;
}

return 0;
}

