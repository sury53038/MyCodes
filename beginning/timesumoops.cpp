#include<iostream>
using namespace std;
class Time{
int hours;
int minutes;
public:
void gettime(int h, int m){
    hours = h;
    minutes = m;
}
void puttime(void){
    cout<<hours<<"hours and ";
    cout<<minutes<<" minutes";
}
void sum(Time, Time);
};
void Time:: sum(Time t1, Time t2){
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}

int main(){
    Time T,T1,T2;
    T.gettime(3,34);
    T1.gettime(5,45);
    T2.sum(T, T1);
    cout<<"\nT:  ";T.puttime();
    cout<<"\nT1: ";T1.puttime();
    cout<<"\nT2: ";T2.puttime();
    return 0;
}