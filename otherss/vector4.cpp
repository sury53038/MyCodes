// count the number of elements strictly grater than x;;
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(6);
    cout << "Enter numbers: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    int x;
    cout << "Enter x: ";
    cin >> x;
    int count = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > x)
        {
            count++;
        }
    }
    cout << "numbers grater than" << x << ": " << count;

    return 0;
}