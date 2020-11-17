#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    cout<<a+b<<endl;
    int d=a-b;
    if(d<0){
        d*=-1;
    }
    cout<<d;
    return 0;
}
