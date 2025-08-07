#include<iostream>
using namespace std;
int main(){
    int a[3]={2,4,5};;
    int (*ptr)[3]=&a;
    cout<<ptr<<" "<<a<<" "<<*ptr<<" "<<*a;
    return 0;
}