//ITP1_7_C 表計算
#include <stdio.h>
void space(int c) {
    if (c != 0) {
        putchar(' ');
    }
}
int main() {
    int r, c, sumc = 0;
    scanf("%d%d", &r, &c);    
    int sumcd=0;
    int data[r][c];
    for (int rc = 0; rc < r; rc++) {
        for (int cc = 0; cc < c; cc++) {
            scanf("%d", &data[rc][cc]);
        }
    }
    for (int rc = 0; rc < r; rc++) {
        sumc = 0;
        for (int cc = 0; cc < c; cc++) {
            space(cc);
            printf("%d", data[rc][cc]);
            sumc += data[rc][cc];
        }
        sumcd+=sumc;
        printf(" %d\n", sumc);
    }
    int sumr;
    for (int ccc = 0; ccc < c; ccc++) {
        sumr = 0;
        for (int rcc = 0; rcc < r; rcc++) {
            sumr+=data[rcc][ccc];
        }
        space(ccc);
        printf("%d",sumr); 
    }
    printf(" %d\n", sumcd);
    return 0;
}
