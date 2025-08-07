#include <iostream>
using namespace std;
int revstr(char name[], int y)
{
    int start = 0, end = y-1;
    while(end>start){
        swap(name[start],name[end]);
        start++;
        end--;
    }

}
int length(char name[])
{   int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Name: ";
    cin >> name;
    cout<<"Your name is "<<name<<endl;
    int x=length(name);
    cout<<"Length: "<<x<<endl;
    revstr(name, x);
    cout<<"Your name is "<<name<<endl;
    return 0;
}