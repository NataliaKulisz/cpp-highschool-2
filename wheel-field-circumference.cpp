// The script returns wheel field, circumference and the value of PI.
// author: https://github.com/NataliaKulisz

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int r, field, circ;
    cout << "Enter the wheel radius: ";
    cin >> r;
    field = M_PI * r * r;
    cout << "Wheel field: " << field << endl;
    circ = 2 * M_PI * r;
    cout << "Wheel circumference: " << circ << endl;
    cout << "PI number: " << M_PI;
}
