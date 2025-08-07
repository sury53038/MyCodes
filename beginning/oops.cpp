#include<iostream>
using namespace std;

class XYZ{
    private:
    int x;
    int y;
    public:
    int z;
    void getdata();
    int putdata();
}p,q,r;
void XYZ :: getdata(){
    cout<<"Enter the private variables: "<<endl;
    cin>>x>>y;
};
int XYZ:: putdata(){
    cout<<x<<endl<<y<<endl;
    cout<<z<<endl;
};
int main(){
    XYZ p;
    p.getdata();
    int a;
    cout<<"enter the public variable: "<<endl;
    cin>>a;
    p.z = a;
    cout<<"Output"<<endl;
    p.putdata();
    return 0;
}