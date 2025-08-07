#include <iostream>
using namespace std;
int main()
{
    int n, num, sum = 0;
    cout<<"Enter the limit: ";
    cin>>n;
    cout << "Enter numbers: ";
    do
    {
        cin >> num;
        sum = sum + num;
        n--;
    } while (n>0);
    cout << "\nSum: " << sum;
    return 0;
}