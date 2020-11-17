#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(i=0;i<strlen(s);i++){
        printf("%c",s[i]);
        if(s[i]==' '){
            printf("\n");
        }
    }
    return 0;
}
