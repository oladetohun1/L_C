#include <stdio.h>
int main(void)
{
	int a,b,c;
	/*a = 3;
	b = 5;
	
	c = (a < b) ? a:b;
	printf("a:%d b:%d c:%d \n\n", a, b, c);
*/
	c = (a = 0, b = 1);
	
	c = ((a = 0), (b = 1));
	printf("c = %d\n", c);
};
