#include<iostream>
using namespace std;
int main(){
    int x=10;
    float y=4.6;
    
    int *ptr= &x;
    // float *ptrf= &y;
    // cout<<"Address of x: "<<ptr<<endl;
    // cout<<"Address of y: "<<ptrf<<endl;
    //cout<<*ptr<<endl;
    *ptr=35;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    return 0;

}