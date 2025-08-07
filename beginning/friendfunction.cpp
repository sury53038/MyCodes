#include<iostream>
using namespace std;
class ABC;

class XYZ{
    int x;
    public:
    void setvalue(int i){
        x=i;
    }
    friend void max(XYZ, ABC);
};
class ABC{
    int a;
    public:
    void setvalue(int i){
        a=i;
    }
    friend void max(XYZ, ABC);
};

void max(XYZ p, ABC q){
    if(p.x>=q.a )
    cout<<p.x<<endl;
    else cout<<q.a<<endl;
}
int main(){
    XYZ xyz;
    xyz.setvalue(34);
    ABC abc;
    abc.setvalue(48);
    max(xyz, abc);
    return 0;
}