#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;
    public:
    void getdata(int a, float b);

    void putdata(void){
        cout<<"number : "<<number<<endl;
        cout<<"cost : "<<cost<<endl;
    }
};
void item::getdata(int a, float b){
    number = a;
    cost = b;
}
int main(){
    item x;
    cout<<"\nObject x"<<"\n";

    x.getdata(100, 200.67);
    x.putdata();
    cout<<endl;
    cout<<"\nObject y"<<"\n";
    item y;
    y.getdata(101, 100.45);
    y.putdata();
    return 0;
}