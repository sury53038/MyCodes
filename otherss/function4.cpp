// Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
#include <iostream>
using namespace std;
float circumference(float rad);
float area(float rad);
int main()
{
    float ar, a, c, b, circ, rad;
    cout << "Enter the radius of the circle: ";
    cin >> c;
    ar = area(c);
    circ = circumference(c);
    cout << "\nAREA: " << ar << "\nCIRCUMFERENCE: " << circ << endl;
    return 0;
}
float circumference(float rad)
{
    return (2 * 3.14 * rad);
}
float area(float rad)
{
    return (3.14 * rad * rad);
}