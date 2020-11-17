#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    int i=a+b;
    int j=a-b;
    printf("%d ",i);
    printf("%d\n",j);
    float k=c+d;
    float l=c-d;
    printf("%.1f ",k);
    printf("%.1f",l);
    return 0;
}
