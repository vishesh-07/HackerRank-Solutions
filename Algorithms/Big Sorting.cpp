#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n; 
    vector<string> vec(n);
    for (auto& s : vec)
        cin >> s;
    sort(vec.begin(), vec.end(), [](const string& a, const string& b){
        return a.length() < b.length() || a.length() == b.length() && a < b; 
    });
    for (auto& s : vec)
        cout << s <<endl;
    return 0;
}
