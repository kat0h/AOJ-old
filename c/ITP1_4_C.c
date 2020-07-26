//ITP1_4_C:   Simple Calculator
#include <stdio.h>
int main(){
	int buf[100];
	int counter = 0;
	int a, b, i;
	char c;
	while(1){
		scanf("%d %c %d", &a, &c, &b);
		switch (c){
			case '+':
				buf[counter] = a + b;
				break;
			case '-':
				buf[counter] = a - b;
				break;
			case '*':
				buf[counter] = a * b;
				break;
			case '/':
				buf[counter] = a / b;
				break;
			default:
				goto _exit;
				break;
		}
		++counter;
	}
	_exit:
	for(i = 0; i < counter; i++){
		printf("%d\n", buf[i]);
	}
}
