#include<iostream>
using namespace std;

int main(){

    for(int i = 0; i < 18; i++){
        for(int k = 0; k < i; k++){
            cout<<" ";
        }
    
        for(int j = 0; j < (18 - i -1); j++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}