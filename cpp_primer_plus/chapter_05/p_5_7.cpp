#include <iostream>
#include <string>

using namespace std;
struct Car
{
    string make;
    int year_made;
};

int main()
{
    int car_num = 0;
    
    cout << "How many cars do you wish to catalog? ";
    cin >> car_num;
    
    Car *car = new Car[car_num];
    
    cin.get();
    
    for(int i=0; i<car_num; i++)
    {
        cout << "Car #" << i+1 <<": " << endl;
        cout << "Please enter the make: ";
        getline(cin, car[i].make);
        
        cout << "Please enter the year made: ";
        cin >> car[i].year_made;
        
        cin.get();
    }
    
    cout << "Here is your collections: " << endl;
    for(int i=0; i<car_num; i++)
    {
        cout << car[i].year_made << " " << car[i].make << endl;
    }
    
    delete []car;
    
    return 0;
}
