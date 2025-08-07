#include<iostream>
using namespace std;
 class binary
 {
    string s;
    public:
    void read(void){
        cout<<"Enter a binary number: ";
        cin>>s;
    }
    void chkbin(void){
        for(int i=0; i<s.length();i++){
            if(s.at(i) != '0' && s.at(i) != '1'){
                cout<<" Non-Binary number format... Program will quite.";
                exit(0);
            }
        }
    }
    void compbin(void){
        chkbin();
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='0')
            s.at(i)='1';
            else
            s.at(i)='0';
        }
    }
    void displaycomp(void){
        compbin();
        cout<<"The 1's complement of the given binary number is: "<<s;
    }
 };
 int main(){
    binary b;
    b.read();
    b.displaycomp();
    return 0;
 }