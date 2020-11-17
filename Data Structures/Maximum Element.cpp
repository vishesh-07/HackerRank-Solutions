#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    multiset<int> se;
    int n, i,j;
    cin>>n;
    while(n--) {
       cin>>i;
        if (i == 1) {
           cin>>j;
            se.insert(j);
            v.push_back(j);
        } else if (i == 2) {
            i = *v.rbegin();
            se.erase(se.find(i));
            v.pop_back();
        } else {
           cout<<*se.rbegin()<<endl;
        }
    }
    return 0;
}
