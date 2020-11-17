#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    set<int>s;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x==1){
            s.insert(y);
        }else if(x==2){
            s.erase(y);
        }else{
            if(s.count(y)!=0){
                cout<<"Yes";
            }else{
                cout<<"No";
            }cout<<endl;
        }
    }   
    return 0;
}
