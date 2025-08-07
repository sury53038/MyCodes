#include <iostream>
using namespace std;
int getchar(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char str[10];
    cout << "Name: \n";
    cin >> str;
    cout << "You name is " << str << endl;
    cout << "Length: " << getchar(str);
    return 0;
}