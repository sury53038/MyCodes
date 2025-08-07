#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int *ptr = &arr[0];
    cout<<ptr<<endl;
    cout<<ptr+1<<endl; 
    cout<<*(ptr+1)<<endl;
    int y = (*ptr) + *(ptr+1);
    cout<< *ptr + 2 <<endl;
    cout<<y<<endl;
    cout<<*ptr++<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
       
    return 0;
}