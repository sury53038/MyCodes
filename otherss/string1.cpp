#include <iostream>
using namespace std;
int main()
{
    char word1[40], word2[40], word3[40], word4[40];
    printf("Enter texts: \n");
    cin >> word1 >> word2;
    cin >> word3 >> word4;
    cout << "\n";
    cout << "word1: " << word1 << "\nword2: " << word2 << "\nword3: "<<word3
         << "\nword4: " << word4;
    return 0;
}