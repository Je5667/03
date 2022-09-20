#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float a,b, c;
	printf("분자를 입력하세요: ");
	scanf("%i", &a);
	printf("분모를 입력하세요: ");
	scanf("%i", &b);
	
	c = a / b;
	printf("나누기의 결과는 %f 입니다. ", c);
	
	
	return 0;
}
