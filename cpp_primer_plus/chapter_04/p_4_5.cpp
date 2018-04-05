#include <iostream>
#include <string>

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
    CandyBar snack;
    snack.brand = "Mocha Munch";
    snack.weight = 2.3;
    snack.calorie = 350;
    //CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "brand is " << snack.brand << endl;
    cout << "weight is " << snack.weight << endl;
    cout << "calorie is " << snack.calorie << endl;

    return 0;
}

