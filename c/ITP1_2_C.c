//ITP1_2_C:   Sorting Three Numbers
#include <stdio.h>
void myswap(int *, int *);
int main(int argc, char const *argv[])
{
    int a, b, c;
    int temp;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b){myswap(&a, &b);}
    if (b>c){myswap(&b, &c);}
    if (a>b){myswap(&a, &b);}
    printf("%d %d %d\n", a, b, c);
    return 0;
}
void myswap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
