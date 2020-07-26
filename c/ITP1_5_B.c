//ITP1_5_B:   Print a Frame
#include <stdio.h>
void a(char character,int max){
	int i;
	for (i=0; ++i<=max;) putchar(character);
}
int main(){
	int H, W;
	int h;
	while(1){
		scanf("%d%d", &H, &W);
		if (H==0&&W==0) break;
		a('#', W);
		putchar('\n');
		for (h=0; ++h<=H-2;){
			putchar('#');
			a('.', W-2);
			printf("#\n");
		}
		a('#', W);
		printf("\n\n");
	}
}