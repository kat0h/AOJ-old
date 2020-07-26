//ITP1_1_D:   Watch
#include <stdio.h>
int main(){
    long S, h, m, s;
    scanf("%ld", &S);
    h = S / 3600;
    S = S - h * 3600;
    m = S / 60;
    S = S - m * 60;
    s = S;
    printf("%ld:%ld:%ld\n", h, m, s);
}
