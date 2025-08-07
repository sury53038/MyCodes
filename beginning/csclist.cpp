#include<iostream>
using namespace std;
class cs_c{
    char name[30];
    int roll_no;
    public:
    void getdata(void);
    void putdata(void);
};
void cs_c::getdata(void){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Roll Number: ";
    cin>>roll_no;
}
void cs_c::putdata(void){
    cout<<"Name: "<<name<<"\n";
    cout<<"Roll Number: "<<roll_no<<"\n";
}
const int size = 10;

int main(){
    cs_c students[size];
    for(int i=0;i<size;i++){
        cout<<"\nDetail of student "<<i+1<<"\n";
        students[i].getdata();
    }
    cout<<"\n";
    for(int i=0;i<size;i++){
        cout<<"\nStudent "<<i+1<<"\n";
        students[i].putdata();
    }
    return 0;
}