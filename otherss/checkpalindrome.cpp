#include <iostream>
using namespace std;
char toLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkpal(char word[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if((toLowercase(word[s] ))!=(toLowercase( word[e])))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
            return 1;
        }
    }
}

int length(char word[])
{
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char word[10];
    cout << "Enter the word to check: ";
    cin >> word;
    int len = length(word);
    cout << "Length: " << len << endl;
    int result = checkpal(word, len);
    cout << result;
    return 0;
}