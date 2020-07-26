//ITP1_5_A:   Print a Rectangle
#include <stdio.h>

int main(){
	int H, W, h, w;
	while(1){
		scanf("%d %d", &H, &W);
		if (H==0 && W==0) break;
		for (h=0; ++h<=H;){
			for (w=0; ++w<=W;)
				putchar('#');
			putchar('\n');
		}
		putchar('\n');
	}
}
