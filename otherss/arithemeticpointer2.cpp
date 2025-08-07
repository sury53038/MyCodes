#include<iostream>
using namespace std;
int main(){
    int arr[3]={2,4,5};
    int *ptr;
    ptr = &arr[0];
    cout<< *ptr<<endl;
    cout<<*++ptr<<endl;
    cout<<*ptr++<<endl;
    cout<<*ptr<<endl;
    return 0;
}