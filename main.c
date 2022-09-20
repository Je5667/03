#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int input_int;
	float input_float;
	
	printf("정수를 입력하시오.");
	scanf("%d", &input_int);
	
	printf("소수를 입력하시오");
	scanf("%f", &input_float);
	
	printf("정수: %d, 소수: %f\n", input_int, input_float);
	
	return 0;}
