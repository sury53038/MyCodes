#include<iostream>
using namespace std;
void selection_sort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int min =i;
        for(int j=i;j<=size-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            }            
        }
        swap(arr[i], arr[min]);
    }
}
int main(){

    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    selection_sort(arr, 5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}