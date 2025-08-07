#include <iostream>
using namespace std;
int main()
{
    int a, b, c, i, j;
    cout << "Enter the number of rows: ";
    cin >> a;
    // triangular pyramid printing.
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a - i; j++)
        {
            cout << " ";
        }

        for (b = 1; b <= 2 * i - 1; b++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}