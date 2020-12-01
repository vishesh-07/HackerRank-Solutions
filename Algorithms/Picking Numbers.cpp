#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=i+1;j<n;j++){
            if(abs(a[i]-a[j])<=1){
                c++;
            }
        }
        b.push_back(c);
    }
    cout<<*max_element(b.begin(),b.end())+1;
}
