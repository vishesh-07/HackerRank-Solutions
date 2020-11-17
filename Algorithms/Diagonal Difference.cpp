#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l=0,r=0;
    cin>>n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(i==j){
                l+=a[i][j];
            }
            if(i+j==n-1){
                r+=a[i][j];
            }
        }
    }
    cout <<abs(l-r);
    return 0;
}
