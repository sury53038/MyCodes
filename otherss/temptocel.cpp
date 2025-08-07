#include<iostream>
using namespace std;

float changeToCel(float f){
    return (f-32)*5/9;
}

float changeToFrah(float c){
    return (c*9/5)+32;
}

int main(){
    int temp; char ab;
    cout<<"Choose to input in Celcis(c) or Farhenheit(f): ";
    cin>>ab;
    cout<<"Enter the temp: ";
    cin>>temp;
    if(ab=='f'){
        temp = changeToCel(temp);
        cout<<"\nTemperature in Celcius: "<< temp;
    } else if (ab=='c'){
        temp = changeToFrah(temp);
        cout<<"\nTemperature in Fahrenheit: "<< temp;
    }
    return 0;
}