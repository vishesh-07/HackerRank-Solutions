#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,p;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }
    int x,a,b;
    cin>>x;
    cin>>a>>b;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    return 0;
}
