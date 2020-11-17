#include <stdio.h>
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    int x=a+b;
    int y=a-b;
    if(y<0){
        y*=-1;
    }
    printf("%d\n%d", x, y);

    return 0;
}
