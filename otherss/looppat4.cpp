#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the number of rows: ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = a-i+1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}