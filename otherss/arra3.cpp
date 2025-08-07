#include <iostream>
using namespace std;
int main()
{
    int i, arr[10];
    cout << "Enter the values in the table: ";
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "\nElements of array in reverse are: ";

    for (i=9;i >= 0; i--)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}