#include<iostream>
#include<vector>
using namespace std;
int inverse(int a);
int sumofdigits(int a);
int fact(int a);

int area(int l, int b);
int area(int r);
int area(int l, double b);
int area(int a, int b, double h);

int fact(int a){
    if(a <= 1){
        return 1;
    }
return a * fact(a-1);
}
int sumOfDigits(int a){
    if(a == 0){
        return 0;
    }
    return a%10 + (sumOfDigits(a/10));

}

int secLargest(vector<int> &arr){
    int max = INT16_MIN;
    int smax = max;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] != max){ 
            smax = arr[i];
        }
    }
    return smax;
}

int main(){
    int n;
    cout<<"Enter the max number :: ";
    cin>>n; 


    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j < i+1; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 1; i <= n; i++){
    //     for(int j = i; j > 0; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 0; i < n; i++){
    //     for(int j = 1; j <= n-i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // int k = 1;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout<<k<<" ";
    //         k++;
    //     }
    //     cout<<endl;
    // }

    // int ans = inverse(n);
    // if(ans == n){
    //     cout<<"It's a palindrome number";
    // }
    // else{
    //     cout<<"Not a palindrome number";
    // }

    // for(int i = 1; i<=n; i++){

    //     for(int p = n; p > i; p--){
    //         cout<<"  ";
    //     }
    //     for(int j = 1; j <= i; j++){
    //         cout<<j<<" ";
    //     }
    //     if(i != 1){
    //         for(int k = i-1; k >= 1; k--){
    //             cout<<k<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // cout<<sumofdigits(n);

    // cout<<fact(n);

    // for(int i = 1; i <= n; i++){
    //     for(int k = n-i; k > 0; k--){
    //         cout<<"  ";
    //     }
    //     for(int j = 1; j <= i; j++){
    //         cout<<j<<" ";
    //     }
    //     if(i != 1){
    //         for(int p = i-1; p >= 1; p--){
    //             cout<<p<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i = 1; i < n; i++){
    //     for(int k = 1; k <= i; k++){
    //         cout<<"  ";
    //     }
    //     for(int j = 1; j <= n-i; j++){
    //         cout<<j<<" ";
    //     }
    //     for(int p = n-i-1; p >= 1; p--){
    //         cout<<p<< " ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 1; i <= n; i++){
    //     for(int k = n-i; k > 0; k--){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j <= i; j++){
    //         cout<<" "<<i;
    //     }
    //     cout<<endl;
    // }

    // for(int i = 1; i <= n; i++){
    //     int p = i;
    //     for(int k = n-i;k >= 1; k--){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j <= i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"square :: "<<area(4,4)<<endl;
    // cout<<"rectangel :: "<< area(4,6)<<endl;
    // cout<<"triangle :: "<<area(5,6.0)<<endl;
    // cout<<"trapezium :: "<<area(12,8,9.0)<<endl;
    // cout<<"circle :: "<<area(10)<<endl;


    // for(int i = 1; i <= n; i++){
    //     for(int j = n-i; j >= 1; j--){
    //         cout<<" ";
    //     }
    //     if(i == 1 || i == n){
    //         for(int k = 1; k <= i; k++){
    //             cout<<k<<" ";
    //         }
    //     }
    //     else{
    //         for(int k = 1; k <= i; k++){
    //             if(k == 1 || k == i){
    //                 cout<<k<<" ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }


    // for(int i = 1; i <= n; i++){
    //     for(int k = 1; k <= i; k++){
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i = 1; i < n; i++){
    //     for(int j = 1; j <= n-i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j < i; j++){
    //         cout<<" ";
    //     }
    //     for(int k = 1; k <= n-i+1; k++){
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i = 1; i <= n; i++){
    //     if(i == 1){
    //         continue;
    //     }
    //     for(int j = n-i; j >= 1; j--){
    //         cout<<" ";
    //     }
    //     for(int k = 1; k <= i; k++){
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }

//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
//????????????????????

// cout<<fact(n);

// cout<<sumOfDigits(n);

vector<int>arr(n,0);
for(int i = 0; i < n; i++){
    cin>>arr[i];
}
cout<<secLargest(arr);



    return 0;
}


int temp = 0;
int inverse(int a){
    while(a){
        int digit = a % 10;
        temp = temp * 10 + digit;
        a = a / 10;
    }
    return temp;
}

int sumofdigits(int a){
    int sum = 0;
    while(a){
        sum += a % 10;
        a = a / 10;
    }
    return sum;
}

// int fact(int a){
//     int ans = 1;
//     while(a >= 1){
//         ans = ans*a;
//         a = a-1;
//     }
//     return ans;
// }

int area(int a, int b){
    return a*b;
}
int area(int a){
    return (3.44*a*a);
}
int area(int a, double b){
    return (0.5 * a * b);
}
int area(int a, int b, double c){
    return (0.5 * (a+b) * c);
}