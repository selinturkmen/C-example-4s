#include <stdio.h>
#include "module1.h"



int main(void){
	int input1, input2;
	printf("Specify two integers to find their GCD:\n");
	scanf("%d %d", &input1, &input2);
  printf("GCD = %d\n",EuclidGCD(input1, input2));
	return 0;
}
