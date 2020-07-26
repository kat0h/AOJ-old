//ITP1_2_D:   Circle in a Rectangle
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if (((x - r) >= 0) && ((y - r) >= 0) && ((x + r) <= W) && ((y + r) <= H))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
