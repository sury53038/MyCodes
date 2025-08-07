#include<iostream>
using namespace std;
class oddeve{
    int a;
    public:
    void getdata();
    void putdata();
};
void oddeve::getdata(){
    cout<<"\nEnter the number to check: ";
    cin>>a;
}
void oddeve::putdata(){
    if(a%2==0)
        cout<<"\nEven";
    else
        cout<<"\nOdd";
}
int main(){
    oddeve aa;
    aa.getdata();
    aa.putdata();
    return 0;
}