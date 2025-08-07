#include<iostream>
using namespace std;
class arrofobj{
    private:
    int a,b,c,d;
    public:
    void getdata();
    void putdata();
};
void arrofobj::getdata(){
    cout<<"Enter the elements: "<<endl;
    cin>>a;
    cin>>b;
}
void arrofobj::putdata(){
    cout<<"Entered elements: "<<endl;
    cout<<a<<"\t"<<b<<endl;
}
int main(){
    arrofobj aa[5];
    for(int i=0;i<5;i++){
        aa[i].getdata();
        aa[i].putdata();
    }
    return 0;
}
