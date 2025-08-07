#include <iostream>
using namespace std;
void table(int a);
void dotLine(int b);
void sumofNnatnos(int c);
int main()

{
    int d, e, f;
    cout << "Enter the digit: ";
    cin >> d;
    table(d);
    cout<<endl;
    cin >> e;
    dotLine(e);
    cout<<endl;
    cout<<"SUM OF NATURAL NOS."<<endl;
    cout << "Enter the limit: ";
    cin >> f;
    sumofNnatnos(f);
    cout << "Enter the limit: ";
    cin >> e;
    dotLine(e);
    return 0;
}
void table(int a)
{
    int i;
    cout << "\n TABLE" << endl
         << endl;
    for (i = 1; i <= 10; i++)
    {
        cout << a * i << endl;
    }
}
void dotLine(int b)
{
    int i;
    for (i = 1; i <= b; i++)
    {
        cout << "*";
    }
    cout << endl;
}

void sumofNnatnos(int c)
{
    int i;
    int sum = 0;
    
    for (i = 1; i <= c; i++)
    {
        sum = sum + i;
    }
    cout << "\nSum of first " << c << " natural numbers: " << sum<<endl;
}
