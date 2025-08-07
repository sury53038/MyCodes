// Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
#include<iostream>
using namespace std;
float max(float x, float y, float z);
float min(float x, float y, float z);
int main(){
    float a,b,c,d,e;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"What do you want to know?\n1.Maximum\n2.Minimum"<<endl;
    cin>>d;
    if(d==1){
    max(a, b, c);
    }
    else if(d==2){
    min(a, b, c);
    }
    else
    {
        cout<<"\nInvalid Choice."<<endl;
    }
    return 0;
}
float max(float x, float y, float z){
    float p= (x>y)?((x>z)?(x):(z)):((y>z)?(y):(z));
    cout<<"\nMaximum: \n"<<p<<endl;
return 0;
}
float min(float x, float y, float z){
    float p =(x<y)?((x<z)?(x):(z)):((y<z)?(y):(z));
    cout<<"\nMinimum: "<<p;
    return 0;
}