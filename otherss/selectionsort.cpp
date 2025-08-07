#include<iostream>
using namespace std;
void selectionsort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i; j <=size - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            swap(arr[i], arr[min]);
        }
    }
}
int main()
{
    int arr[5]={7,6,4,8,0};
    // cout << "Enter the elements of array: ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    selectionsort(arr, 5);
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}