// Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
// Marks        Grade
// 91-100         AA
// 81-90          AB
// 71-80          BB
// 61-70          BC
// 51-60          CD
// 41-50          DD
// <=40          Fail
#include <iostream>
using namespace std;
char grad(int marks);
int main()
{
    int x;
    cout << "Enter the marks obtained: ";
    cin >> x;
    cout << "GRADS: "<< grad(x) << endl;
    return 0;
}
char grad(int marks)
{
    cout << endl;
    if (100 >= marks && marks > 90){
    return 'A';
    }
    else if (90 >= marks && marks > 80)
    {
        return 'B';
    }
    else if (80 >=marks && marks > 70)
    {
        return  'C';
        }
    else if (70 >=marks && marks > 60)
    {
        return 'D';
    }
    else if (60 >= marks && marks> 50)
    {
        return 'E';
    }
    else if (50 >= marks && marks >= 40)
    {
        return 'F';
    }
    else if (marks < 40)
    {
       return 'F';
    }
    else{
        return 'I';
    }
}