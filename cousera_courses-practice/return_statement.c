/*return Zero means the program finished the proper way
 * return;
 * return 0;
 * return (a + b);
 * let us see a simple use in a function
 *
 */
#include <stdio.h>

double cube (double x)
{
	return ( x * x * x);
}
int main(void)
{
	int cubes;

	cubes = cube(3);
	printf("The cube is: %d\n", cubes);

	return (0);
}

