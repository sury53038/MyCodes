#include<iostream>
using namespace std;
int main(){
    int x = 9;
    cout<<&x<<endl;
    
    int *ptr = &x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    float y = 6.4;
    float *ptrf = &y;
    cout << &y;
    cout<<"\n"<<ptrf;
    cout<<"\n"<<*ptrf<<endl;
    int z = *ptr + *ptrf;
    cout<<z<<endl;
    *ptrf = 20.0;
    int a;//= *ptr + *ptrf;
    int *ptra = &a;
    *ptra = *ptr + *ptrf;
    cout<<*ptra<<endl;
    cout<<a;


}

