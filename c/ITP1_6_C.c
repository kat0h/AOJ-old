//ITP1_6_C:   Official House
#include <stdio.h>
int main(){
    int loop, counter, b, f, r, v;
    int room[4][3][10]={};
    scanf("%d", &loop);
    for (counter=-1; ++counter<loop;){
        scanf("%d%d%d%d", &b, &f, &r, &v);
        room[b-1][f-1][r-1] += v;
    }
    for(b=-1;++b<4;){
        if(b!=0)printf("%s", (b>0&&b<4)?"####################\n":"\n");
        for(f=-1;++f<3;){
            printf(" ");
            for(r=-1;++r<10;)
                    printf("%d%c", room[b][f][r], (r!=9)?' ':'\n');
        }
    }
}
