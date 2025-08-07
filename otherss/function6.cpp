// Define a program to find out whether a given number is even or odd.
#include<iostream>
using namespace std;
int oddeven(int a);
int main(){
    int x;
    cout<<"\nEnter the number: ";
    cin>>x;
    oddeven(x);
    return 0;
}
int oddeven(int a){
    if(a%2==0)
    cout<<"\nEven";
    else
    cout<<"\nOdd";
    return 0;

}