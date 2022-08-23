/**
 * Scope Rules
 * declaration
 * blocks
 * nested blocks
 * multiple use of same identifier name
 * lifetime
 * simple
 * An example:
 */
#include<stdio.h>
int main(void)
{
	int i = 5;
		int j = i + 3;
			printf("i:%d , j:%d\n",i,j);
	printf("%d",i);
	return 0;

}
