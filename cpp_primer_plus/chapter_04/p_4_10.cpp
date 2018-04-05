#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double, 3> grades;
    double ave = 0.0;
    
    cout << "input your three times grades: " << endl;
    cin >> grades[0];
    cin >> grades[1];
    cin >> grades[2];
    
    ave = (grades[0] + grades[1] + grades[2]) / 3;
    
    cout << "grades are: " << grades[0] << ", " << grades[1] << ", " << grades[2] << endl;
    cout << "average is: " << ave << endl;
    
    return 0;
}
