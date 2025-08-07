#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of x and y: ";
    cin>>x>>y;
    int *ptrx;
    int *ptry;
    ptrx=&x;
    ptry=&y;

    int result;
    int *result_pointer;
    result_pointer=&result;
    
    *result_pointer=*ptrx + *ptry;
    cout<<endl;
    cout<<result<<endl;
    cout<<*result_pointer<<endl;
    return 0;

}