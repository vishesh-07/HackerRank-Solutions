#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        int temp=n;
        while(temp!=0){
            int last=temp%10;
            if(last!=0 && n%last==0){
                c++;
            }
            temp/=10;
        }
        cout<<c<<endl;
    }
}
