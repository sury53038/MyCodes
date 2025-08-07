//A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.
#include<iostream>
using namespace std;
int votingright(int x);
int main(){
    int a;
    cout<<"Enter the age of the voter: ";
    cin>>a;
    votingright(a);
    return 0;
}
int votingright(int x){
    if(x>=18)
    cout<<"\nYes, you can vote.";
    else
    cout<<"\nNo, you are not eligible to vote.";
    return 0;
}