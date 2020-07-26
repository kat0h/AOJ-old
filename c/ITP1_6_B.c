//ITP1_6_B:   Finding Missing Cards
#include <stdio.h>
#include <stdbool.h>
int main(){
    int maisu, i, n;
    char ch;
    char marks[]={'S', 'H', 'C', 'D'};
    int aruka[4][13]={0};
    int a,b;
    for (a=0;a<4;++a)
        for (b=0;b<14;++b)
            aruka[a][b] = 0;
    scanf("%d", &maisu);
    for (i=1; i<=maisu; i++){
        scanf("%c", &ch);
        scanf("%c %d", &ch, &n);
        n-=1;
        if     (ch=='S')aruka[0][n]=1;
        else if(ch=='H')aruka[1][n]=1;
        else if(ch=='C')aruka[2][n]=1;
        else if(ch=='D')aruka[3][n]=1;
    }
    for (a=1;a<=4;a++){
        for (b=1;b<=13;b++){
            if (aruka[a-1][b-1]!=1){
                printf("%c %d\n", marks[a-1], b);
            }
        }
    }
}
