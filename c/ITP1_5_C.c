//ITP1_5_C:   Print a Chessboard
#include <stdio.h>
int main(){
    while (1){
        int h, w;
        int H, W;
        char c = '#';
        scanf("%d%d", &H, &W);
        if (H==0&&W==0) break;
        for (h=0; ++h<=H;){
            for (w=0; ++w<=W; c=(c=='#')?'.':'#')
                putchar(c);
            putchar('\n');
            c = h%2==0?'#':'.';
        }
        putchar('\n');
    }
}
