#include <iostream>
#include <string>
using namespace std;
int main() {
   string a,b;
   getline(cin,a);
   getline(cin,b);
   string c=a;
   cout<<a.length()<<" ";
   cout<<b.length()<<"\n";
   string d=a+b;
   cout<<d<<endl;
   char c0=a[0];
   char c1=a[0];
   char c3=b[0];
   a[0]=b[0];
   b[0]=c[0];
   cout<<a<<" "<<b; 
    return 0;
}
