// Print the multiplication table of 15 using recursion.
#include <iostream>
using namespace std;
int table(int x, int y);
int main()
{
    table(15, 10);
    return 0;
}
int table(int x, int y)
{
    if (y != 1)
    {
        table(x, y - 1);
    }
    cout << x * y << "\n";
    return 0;
}