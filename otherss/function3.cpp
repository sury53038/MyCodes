// Define a function that returns the product of two numbers entered by user
#include <iostream>
using namespace std;
float product(float a, float b);
int main()
{
    int x, y;
    cout << "Enter two numbers: \n";
    cin >> x >> y;
    float pro = product(x, y);
    cout << pro;
    return 0;
}
float product(float a, float b)
{
    return (a * b);
}