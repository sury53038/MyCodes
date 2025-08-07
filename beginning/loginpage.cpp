#include<iostream>
#include<fstream>
using namespace std;


class temp{
    string userName,Email,password;
    fstream file;
    public:
    void login();
    void signup();
    void forgot();
}obj;

int main(){
    char choice;
    cout<<"\n1- Login";
    cout<<"\n2- Sign-in";
    cout<<"\n3- Forgot Password";
    cout<<"\n4- Exit";
    cout<<"\n\nEnter your choice :: ";
    cin>>choice;

    switch(choice){
        case '1':

        break;

        case '2':

        break;

        case '3':

        break;

        case '4':

        break;

        default:
        cout<<"\nInvlid Selection";
    }

    return 0;
}
void temp :: signup(){
    cout<<"\nEnter User Name :: ";
    getline(cin,userName);
    cout<<"\nEnter your Email id :: ";
    getline(cin,Email);
    cout<<"\nEnter Password: ";
    getline(cin,password);

    file.open("loginData.txt",ios :: out  | ios :: app);
    file<<userName<<"*"<<Email<<"8"<<password<<endl;
    file.close();
}
void temp :: login(){
    string searchName, searchPass;
    cout<<"------------LOGIN-------------";
    cout<<endl<<"Enter Usename:: "<<endl;
    getline(cin,searchName);
    cout<<endl<<"Enter your password :: "<<endl;
    getline(cin,searchPass);

    file.open("loginData.txt", ios::in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password ,'\n');
    while(!file.eof()){
        if(userName == searchName){
            if(password == searchPass){
                cout<<"\nAccount  Login Succesfull...!";
                cout<<"\nUsername :: "<<userName<<endl;
                cout<<"\nEmail :: "<<Email<<endl;
            }
        }
    }
}