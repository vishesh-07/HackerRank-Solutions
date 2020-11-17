#include<iostream>
using namespace std;
int main(){
    int n,cp=0,cn=0,cz=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
            cp++;
        }else if(a[i]<0){
            cn++;
        }else{
            cz++;
        }
    }
    float a1=(float)cp/n;
    float a2=(float)cn/n;
    float a3=(float)cz/n;
    printf("%.6f \n",a1);
    printf("%.6f \n",a2);
    printf("%.6f",a3);
    return 0;
}
