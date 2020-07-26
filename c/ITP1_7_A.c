//ITP1_7_A grading
#include <stdio.h>
int main(){
    int m,f,r,sum;
    while(1){
        scanf("%d%d%d", &m,&f,&r);
        if (m==f&&f==r&&m==-1)break;
        if (m==-1||f==-1){printf("F\n");continue;}
        sum=m+f;
        if (sum>=80)putchar('A');
        else if(sum>=65)putchar('B');
        else if(sum>=50||r>=50)putchar('C');
        else if(sum>=30)putchar('D');
        else if(sum<30)putchar('F');
        putchar('\n');
    }
}
