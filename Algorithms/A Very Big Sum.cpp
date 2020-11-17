#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,a[1000],sum=0;
   cin>>n;
   for(long long int i=0;i<n;i++){
       cin>>a[i];
    }
    for(long long int i=0;i<n;i++){
     sum+=a[i];
    }cout<<sum;
    return 0;
}
