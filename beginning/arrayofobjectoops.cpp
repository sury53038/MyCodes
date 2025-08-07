#include<iostream>
using namespace std;
class Office{
    int id_no;
    char name[30];
    int salary;
    public:
    void getdata(){
        cout<<"Id_no: "<<endl;
        cin>>id_no;
        cout<<"Name: "<<endl;
        cin>>name;
        cout<<"Salary amount: "<<endl;
        cin>>salary;
    }
    void display(void);
}mannager[3];

void Office :: display(void){
    cout<<endl<<endl;
    cout<<"Id no: "<<id_no<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary amount: "<<salary<<endl;
}

int main(){

    mannager[3];
    for(int i=0; i<3; i++){
        mannager[i].getdata();
    }
    for(int i=0; i<3; i++){
        mannager[i].display();
    }

    return 0;
}