#include<iostream>
using namespace std;
 void firstandlastocc(string s, char ch, int *first, int *last){
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            *first=i;
            break;
        }
    }
    for(int i=s.size()-1; i>=0;i--){
        if(s[i]==ch){
            *last=i;
            break;
        }
    }

 }

 int main(){

    string s = "aaslbsa";
    char ch= 'a';
    int first = -1;
    int last = -1;

    // int *pf = &first;
    // int *pl = &last;
    firstandlastocc(s, ch, &first, &last);
    cout<<first<<" "<<last<<endl;
    // cout<<first<<" "<<last;
    return 0;
 }