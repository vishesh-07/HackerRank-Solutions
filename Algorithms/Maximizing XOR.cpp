#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,r,max=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        for(int j=i;j<=r;j++){
            int x=j^i;
            if(x>max){
                max=x;
            }
        }
    }
    cout<<max;
}
