#include<iostream>
using namespace std;
int replacespac(char str[], int size){
    for(int i=0;i<size;i++){
        if(str[i] ==" "){
            str[i].push_back(@);
            str[i].push_back(4);
            str[i].push_back(0);
        }
    }
}
int main(){
    char address[49];
    cout<<"Enter addres: ";
    cin>>address;
    return 0;
}