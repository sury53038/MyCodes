#include<iostream>
using namespace std;
void swapp(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int x = 20;
    int y = 30;

    int *p1 = &x;
    int *p2 = &y;

    swapp(p1, p2);
    cout<<x<<" "<<y;
    return 0;
}