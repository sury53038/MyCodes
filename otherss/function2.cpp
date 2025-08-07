/*write a program to print the sum of two numbers entered by the user by defining your own function.*/
#include <iostream>
using namespace std;
void sum(void);
int main()
{
    sum();

    return 0;
}
void sum(void)
{
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    float add = a + b;
    cout << "\nSum: " << add;
}