#include<iostream>
using namespace std;

void selection_sort(int arr[], int size){
    for(int i=0;i<= size-2;i++){
        int min = i;
        for(int j=i;j<=size-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

int main(){
    int n;
    cout<<"\nEnter the no of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of array: ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    // int arr[5]={1,6,4,9,0};

    selection_sort(arr, n);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
     
    return 0;
}