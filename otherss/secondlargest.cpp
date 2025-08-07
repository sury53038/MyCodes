#include <iostream>
using namespace std;
int main()
{
    int collection[8]={12,14,13,35,24,23,54,55};
    // cout << "Enter elements:" << endl;
    // for (int i = 1; i <= 8; i++)
    // {
    //     cin >> collection[i];
    // }

    int largest = collection[0];

    int largestindx = -2;

    int index;

    for (int i = 1; i <= 8; i++)
    {
        if (largest < collection[i])
        {
            largest = collection[i];
            largestindx = i;
        }
    }
    cout << largest << endl;
    index = largestindx;

    collection[index] = -1;
    
    for (int i = 1; i <= 8; i++)
    {
        if (largest < collection[i])
        {
            largest = collection[i];
        }
    }
    cout << endl;
    cout << "second largest element: " << largest;
    return 0;
}