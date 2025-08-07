#include<iostream>
using namespace std;
class numberchk
{
    int x,y,z;
    int neww(void)
    {
        cout<<"Enter new value: ";
        cin>>x;
        return x;
    }
    public:
    void getdata(void)
    {
        cout<<"Enter a number: ";
        cin>>y;
    }
    void putdata(void){
        cout<<"Entered number is : "<<y<<endl;
        y = neww();
        cout<<"Updated value : "<<y<<endl;
    }
};
int main(){
    numberchk check;
    check.getdata();
    check.putdata();
    return 0;
}