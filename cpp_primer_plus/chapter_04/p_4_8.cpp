#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string brand;
    double diameter;
    double weight;
};

int main()
{
    Pizza * pizza = new Pizza;
    cout << "input diameter: ";
    cin >> pizza->diameter;
    cin.get();                  //cin.get() 将换行符保留下来
    
    cout << "input brand: ";
    getline(cin, pizza->brand);
    cout << "input weight: ";
    cin >> pizza->weight;
    
    cout << "brand is " << pizza->brand << endl;
    cout << "diameter is " << pizza->diameter << endl;
    cout << "weight is " << pizza->weight << endl;
    
    delete pizza;
    
    return 0;
}

