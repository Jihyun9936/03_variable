#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int input_int;
	float input_float;
	
	printf("enter the integer : ");
	scanf("%d", &input_int);
	printf("enter the float : ");
	scanf("%f", &input_float);
	
	printf("intetger : %d\tfloat : %f", input_int, input_float);
}
