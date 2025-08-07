#include <iostream>
using namespace std;
int main()
{
    int x[2] = {20, 30}, y, *z;
    z = &x[0];
    //cout << z << " " << *z << endl;
    
    // cout<< z++ <<endl;
    cout<<*z++<<endl;
    cout<<*z<<endl;
    cout<<(*z)++<<endl;
    cout<<*z<<endl;
    //cout<<x[0]<<" "<<x[1]<<endl;
    //cout<<z<<" "<<*z<<endl;
    return 0;
}