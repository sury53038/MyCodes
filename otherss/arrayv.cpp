#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i;
    cout << "Enter the size of the array: " << endl;
    cin >> i;
    int arr[i];
    cout << "Enter the elements of the array: ";
    for (int j = 1; j <= i; j++)
    {
        cin >> arr[j];
    }
    cout << "Elements of the array are: ";
    for (int k = 1; k <= i; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}