#include <iostream>  
using namespace std;  
int main ()  
{     
    // declaration of variables  
    int *ptr1, *ptr2, sum;  
      
    // allocated memory space using new operator  
    ptr1 = new int;   
    ptr2 = new int;  
    //sum = new int;
    cout << " Enter first number: ";  
    cin >> *ptr1;  
    cout << " Enter second number: ";  
    cin >> *ptr2;  
    sum = *ptr1 + *ptr2;  
    cout << " Sum = " << sum;  
      
    // delete pointer variables  
    delete ptr1;   
    delete ptr2;  
   // delete sum;
    return 0;  
}  