#include <stdio.h>
#include <string.h>
char s[110],p[110],f[300];
int main(){
    scanf("%s%s", p, s);
    strcpy(f, p);
    strcat(f, p);
    printf("%s\n", strstr(f, s)!=NULL?"Yes":"No");
}
