#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char a[1000];
    int i=0;
    int q0=0,q1=0,q2=0,q3=0,q4=0,q5=0,q6=0,q7=0,q8=0,q9=0;
    while(a[i]!='\0'){
        scanf("%s",&a[i]);
        i++;
    }
    int len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='0'){
            q0++;
        }
        else if(a[i]=='1'){
            q1++;
        }
        else if(a[i]=='2'){
            q2++;
        }
        else if(a[i]=='3'){
            q3++;
        }
        else if(a[i]=='4'){
            q4++;
        }
        else if(a[i]=='5'){
            q5++;
        }
        else if(a[i]=='6'){
            q6++;
        }
        else if(a[i]=='7'){
            q7++;
        }
        else if(a[i]=='8'){
            q8++;
        }
        else if(a[i]=='9'){
            q9++;
        }
    }printf("%d %d %d %d %d %d %d %d %d %d",q0,q1,q2,q3,q4,q5,q6,q7,q8,q9);
    return 0;
}
