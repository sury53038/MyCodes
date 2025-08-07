// ommiting part for loop
// we can declare a variable outside the loop and run the loop.
// but we need to put a semi-colon before the condition expression in the bracket of loop.
// if we omit the condition expression then we need to use terminator statement outside the loop.
//
#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    while (true)
    {
        if (i % 5 == 0 && i % 7 == 0)
            cout << i << endl;
        i++;
        if (i > 100)
            break;
    }
    return 0;
}