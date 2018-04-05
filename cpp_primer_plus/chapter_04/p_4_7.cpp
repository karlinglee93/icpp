#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string brand;
    double diameter;
    double weight;
};

int main(int argc, const char * argv[])
{
    // insert code here...
    Pizza pizza;
    cout << "input brand: ";
    getline(cin, pizza.brand);
    cout << "input diameter: ";
    cin >> pizza.diameter;
    cout << "input weight: ";
    cin >> pizza.weight;

    cout << "brand is " << pizza.brand << endl;
    cout << "diameter is " << pizza.diameter << endl;
    cout << "weight is " << pizza.weight << endl;

    return 0;
}
