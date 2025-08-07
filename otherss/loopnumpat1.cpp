#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    cout<<"Enter the number of rows: ";
    cin>>k;
    for(i=1;i<=k;i++){
        for(j=i;j<=k;j++){
            cout<<j;
        }
    for(j=1;j<=(i-1);j++){
        cout<<j;
    }
    cout<<endl;
    }
    return 0;
}
// 12345
// 23451
// 34512
// 45123
// 51234 ye wala pattern.