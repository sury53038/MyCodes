#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(6);
    cout<<"Enter numbers: ";
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
        if (x == vec[i])
        {
            count++;
        }
    }
    cout << "No of occurances of " << x << " :" << count;
    return 0;
}
//count the number of occurances of x;