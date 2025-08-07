#include<iostream>
using namespace std;
    int main(){ 
    //     // finding the size of the array;
    // int array[]={1,2,3,4,5};
    //  cout<<sizeof(array)<<endl;
    // // finding the length of the array;
    //  cout<<sizeof(array)/sizeof(array[2])<<endl;
    char vowels[5];
    for (int idx = 0;idx<5;idx++){
        cin>>vowels[idx];
    }
    for(int idx=0;idx<5;idx++){
        cout<<vowels[idx]<<" ";
    }
    return 0;
}