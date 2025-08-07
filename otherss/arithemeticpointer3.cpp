#include<iostream>
using namespace std;
int main(){
    int arr[3]={3,6,9};
    int * ptr;
    ptr=&arr[0];
    cout<<*ptr<<endl;
    cout<<*++ptr<<endl;
    cout<<++*ptr<<endl;
    cout<<*++ptr<<endl;
    cout<<(*ptr)++<<endl;
    cout<<++(*ptr)<<endl;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    return 0;

}