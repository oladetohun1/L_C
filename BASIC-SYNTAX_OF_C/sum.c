/*calculates the sum*/
#include <stdio.h>
#include "A-function_that-adds_two-integers.c"

int main()
{
	int sum;
	
	sum = integer_add(5 ,13);
	printf("The additon of 5 and 13 is: %d\n", sum);
	return 0;
}
