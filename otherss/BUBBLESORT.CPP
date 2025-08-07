#include<iostream>
using namespace std;

int bubbleSort(int arr[], int size){
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
return 0;
};
int main(){
    int arr[8]={3,5,6,34,11,22,52,13};
    bubbleSort(arr, 8);
    for(int k=0;k<8;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}