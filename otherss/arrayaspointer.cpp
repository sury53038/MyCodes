#include<iostream>
using namespace std;
int main(){
    int arr[3]={2,5,7};
    int *ptr = &arr[0];

    cout<<(ptr+1)<<" "<<(arr+1)<<endl;
    cout<<*(ptr)<<" "<<*arr<<endl;
    cout<<*(ptr+1)<<" "<<*(arr+1)<<endl;
    cout<<*(ptr+2)<<" "<<*(arr+2)<<endl;
    return 0;
}