#include<iostream>
using namespace std;
void merge(int arr[], int s, int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }

    k = mid+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }
    int index1 = 0, index2 = 0;
    k = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] > second[index2]){
            arr[k++] = second[index2++]; 
        }
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
    }
    while(index1 < len1){
        arr[k++] = first[index1++];
    }
    while(index2 < len2){
        arr[k++] = second[index2++]; 
    }
}

void mergesort(int arr[], int s, int e){
    if(s >= e) return;

    int mid = s+(e-s)/2;

    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);


    merge(arr, s, e);
}

int main(){

    int arr[16] = {1,22,7,89,233,221,335,99,110,2222,11,2,202,53,0,45};
    mergesort(arr, 0, 15);
    for(int i = 0; i < 16; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}