#include<iostream>
using namespace std;

class employee{
    char name[30];
    float age;
    public:
    void getdata(void);
    void putdata(void);
};
void employee::getdata(void){
    cout<<"Name: ";
    cin>>name;
    cout<<"Age: ";
    cin>>age;
}
void employee::putdata(void){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
const int size = 3;

int main(){
    employee mannager[size];
    for(int i = 0; i<size; i++){
        cout<<"\nDetails of mannager"<<i+1<<"\n";
        mannager[i].getdata();
    }
    for(int i=0;i<size;i++){
        cout<<"Mannager"<<i+1<<"\n";
        mannager[i].putdata();
    }
    return 0;
}