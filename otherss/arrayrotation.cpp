#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k;
    cout<<"Enter k: "<<endl;
    cin>>k;
    // int arr[6]={1,2,3,4,5,6};
    // int newarr[6];
    // int rotkey;
    // cout<<"Enter rotkey: "<<endl;
    // cin>>rotkey;
    // int j=0;
    // for(int i=rotkey;i<=6;i++){
    //     newarr[j++]=arr[i];
    // }
    // for(int i=1;i<=rotkey;i++){
    //     newarr[j++]=arr[i];
    // }
    // for(int i=0;i<6;i++){
    // cout<<newarr[i]<<" ";
    // }
    vector<int> s={1,2,3,4,5,6};
    k=k%s.size();
    reverse(s.begin(), s.end());
    reverse(s.begin()+k, s.end());
    reverse(s.begin(), s.begin()+k);
    return 0;
}