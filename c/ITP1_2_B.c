//ITP1_2_B:   Range
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a < b) && (b < c))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    printf("\n");
    return 0;
}
