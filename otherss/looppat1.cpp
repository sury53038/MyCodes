#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter the number of rows and columns: ";
    cin >> n;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}