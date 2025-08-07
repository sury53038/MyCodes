#include <iostream>
using namespace std;

 int main(){
int index;
    int array[]={93,24,77,97,16};
    int max=array[0];
    int maxindex =-1;
    int secmax=array[0];

    for(int i=1; i<5; i++){
        if(array[i]>max)
        {
            max=array[i];
            maxindex=i;
        }

    }
      
     
      index = maxindex;
      //cout<<index;
     array[index]=-1;

     

     for(int i=1 ;i<5 ;i++){
        if(array[i]>secmax){
            secmax=array[i];
        }
     }
cout<<" second largest element is :" << secmax;

return 0;

 }