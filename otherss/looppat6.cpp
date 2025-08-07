#include <iostream>
using namespace std;
int main()
{
    int a, b, c, n, i, j, k;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j >=6 - i)
                cout << "*";
            else
                cout << " ";
        }
      cout<<endl;
    }
}