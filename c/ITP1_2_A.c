//ITP1_2_A:   Small, Large, or Equal
#include <stdio.h>
#include <string.h>
int main(){
    int a, b;
    char c[2];
    scanf("%d %d", &a, &b);
    if (a > b) {
        strcpy(c, ">");
    } else if (a < b) {
        strcpy(c, "<");
    } else {
        strcpy(c, "==");
    }
    printf("a %s b\n", c);
    return 0;
}

