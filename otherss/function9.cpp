// Write a program to print the factorial of a number by defining a function named 'Factorial'.
// Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
// 4! = 1*2*3*4 = 24
// 3! = 3*2*1 = 6
// 2! = 2*1 = 2
// Also,
// 1! = 1
// 0! = 0
#include <iostream>
using namespace std;
int recursion(int a);
int main()
{
    int x;
    cout << "Enter the number to find factorial:";
    cin >> x;
    int y = recursion(x);
    cout<<"\n"<<y;
    return 0;
}
int recursion(int a)
{
    int fact = 1;
    if(a==1)
    return(1);
    int factorial= a*(a-1);
    return(factorial);
}