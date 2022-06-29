/*A function that multiplies two integers and prints the result to the screen*/
#include<stdio.h>

int integer_mul( int x, int y)
{
	int mult;
	mult = x * y;
	return mult;
}

int main()
{
	int mult;
	mult = integer_mul(4, 3);
	printf("The multiplication of 4 and 3 is: %d\n", mult);
	return 0;
}
