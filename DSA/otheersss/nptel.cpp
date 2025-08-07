#include<iostream>
using namespace std;
int x;
#define DOUBLE (x) x+x
#define DOUBLE1(x) 2*x
int main(){
    int a=2;
    cout<<DOUBLE(a++) <<" " <<DOUBLE1(a++) << endl;
    return 0;
}