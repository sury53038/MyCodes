#include<iostream>
using namespace std;
int bsearch(int arr[], int size, int key){
    
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start <= end){
        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){

    int even[6]={2,3,4,5,6,7};
    int odd[5]={2,3,4,5,6};
    int y = bsearch(even, 6, 7);

    cout<<"index of 7 is: "<<y<<endl;
    cout<<"Position of 7 is: "<<y+1<<endl;

    
        return 0;
}