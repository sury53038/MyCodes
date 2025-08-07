#include<iostream>
using namespace std;

int main(){
    //int x = 20, *y = &x;
    //int *y = &x;
    //y=&x;
    // float w = 28.608;
    // float *z = &w;
    // cout<<"Address: "<<y<<endl;
    // cout<<"Value: "<<*y<<endl;
    // cout<<"\nAddress: "<<z;
    // cout<<"\nValue: "<<*z;
    int quantity,x, *y, z;
    quantity = 100;
    y = &quantity;
    cout<<*y<<endl;
    z = *y;
    cout<<z;
    cout<<"\n"<<x;

    return 0;
}