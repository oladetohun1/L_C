/*
 * Recursio for factorial
 * It can be use in place of iteration
 * recursiuon is simply doing things repeatedly
 */

#include <stdio.h>
long int factorial(int n)
{
	long f = 1;
	int i;

	for (i = 1; i<= n; i++)
		f *=i;
	return f;
}

long int recursive_factorial(int n)
{
	if (n ==1)
		return 1;
	else
		return(recursive_factorial(n - 1) * n);
}
