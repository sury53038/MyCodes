#include <iostream>
using namespace std;
void sortingBubble(int arr[], int size)
{
    int i;
    for (i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main()
{
    int array[6] = {12, 11, 6, 5, 7, 10};

    sortingBubble(array, 6);
    for(auto i:array){
        cout<<i<<" ";
    }
    
    return 0;
}