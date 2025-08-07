#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the limit of natural number: ";
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;//initialising the variable.
    while (i <= n)
    {
        sum = sum + i;
        i++;//increment of the variable.
    }
    cout << "\nSum of " << n << "natural numbers is: " << sum;

    return 0;
}