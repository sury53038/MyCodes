#include <iostream>
using namespace std;
void process(int *ptr, int n)
{   
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
     *(ptr+2) = 33;
    
}
int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    // int *ptr=&arr[0];
    // we use address name as pointer.
    process(arr, 5);
    for(int i=0;i<5;i++){
        cout<<"\n"<<arr[i]<<" "; 
    }
    return 0;
}