// for(initialization;condition;increment or decrement){
// syntax/code;
//}printing sum of n natural nos using a for loop.
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the limit for sum: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    } 
    cout << "\nSum: " << sum;
    return 0;
}