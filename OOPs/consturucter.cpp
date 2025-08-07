#include<iostream>
using namespace std;

class Customer
{   
    public:
    string name;
    int account_number;
    int balance;

    Customer(){
        cout<<"Consturucter is called.";
    }
    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
};


int main(){
    Customer Ram("Ram", 1001, 132);
    cout<<"hello account holder"<<endl;
    cout<<Ram.name;
    return 0;
}