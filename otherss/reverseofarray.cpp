#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {22, 12, 63, 29, 30, 44, 23};
    int start = 0;
    int end = (sizeof(arr)/sizeof(int))-1;
    while (end >= start)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}