//ITP1_5_D:   Structured Programming
#include <stdio.h>
int main(){
    int n, i, x;
    scanf("%d", &n);
    for (i=0; ++i<=n; ) {
        if (i%3==0){
            printf(" %d", i);
            continue;
        }
        x=i;
        do{
            if (x%10==3){
                printf(" %d", i);
                break;
            }
            x /= 10;
        }while(x);
    }
    putchar('\n');
}
