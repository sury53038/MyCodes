#include<iostream>
using namespace std;

class addition{
    int a,b;

public:
    void getdata();
    void putdata();
};
    void addition::getdata(){
        cout<<"\nEnter two numbers: ";
        cin>>a>>b;
    }
    void addition::putdata(){
        cout<<"\nAddition: "<<a+b;
    }
int main(){
    addition aa;
    aa.getdata();
    aa.putdata();
    addition bb;
    bb.getdata();
    bb.putdata();
    addition cc;
    cc.getdata();
    cc.putdata();
    return 0;
}
