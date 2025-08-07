// find the last occurance of an element x in a given array.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6);
    cout << "Enter elements to check: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    cout << "Enter x: \n";
    int x;
    cin >> x;
    int occurance = -1;
    // for (int j = 0; j < v.size(); j++)
    // {
    //     if (v[j] == x)
    //         occurance = j;
    // }
    for (int j = v.size()-1; j >= 0; j--)
    {
        if (v[j] == x){
            occurance = j+1;
        break;
    }
    }
    cout << "Last occurance of " << x << ": " << occurance << endl;
    return 0;
}