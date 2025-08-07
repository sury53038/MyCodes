#include<iostream>
#include<vector>
using namespace std;

int maxrow(vector<vector<int>>v){
    int maxone = -1;
    int rown = -1;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            int cnt = 0;
            if(v[i][j] == 1){
            cnt = v[i].size()-j;
            if(cnt>maxone){
                maxone = cnt;
                rown = i;
            }          
            break;
            }
            
        }
    }
    return rown;

}
int main(){
    int n,m;
    cout<<"Enter the numbers of rows and columns :: ";
    cin>>n>>m;
    vector <vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int result = maxrow(vec);
    
    return 0;
}