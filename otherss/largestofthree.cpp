#include<iostream>
using namespace std;
int main(){
    int arr[3];
    cout<<"Enter three numbers:";
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int max= -1;
    for(int i=0;i<3;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"largest: "<<max;
}