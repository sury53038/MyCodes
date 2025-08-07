#include<iostream>
using namespace std;

int main(){
    int ans;
    int a = 1, b = 20, c = 5, d = 3;
    if(a > b){
        if(b > c){
            if(c > d){
                ans = a;
            }
        }
        else if(c > d){
            ans = c;
        }
    }
    else{
        ans = d;
    }
    // else if(b > c){
    //     if(c > d){
    //         ans = b;
    //     }
    // }
    // else if(c > a){
    //     if( c > b){
    //         if(c > d){
    //             ans = c;
    //         }
    //     }
    // }
    // else {
    //     ans = d;
    // }
   

    cout<<ans<<endl;

    return 0;
}