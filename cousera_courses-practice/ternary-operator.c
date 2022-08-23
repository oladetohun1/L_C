/**
 * ternary operator
 */

#include <stdio.h>
int main(void)
{
	int speed;

	printf("\nEnter your speed as an integer:");
	scanf("%d", &speed);
	speed = (speed <= 65) ? (65) :(speed <=70) ? (70): (90);
	switch (speed)
	{
		case 65: printf("\n No speeding Ticket\n\n");break;
		case 70: printf("\n Speeding Ticket\n\n");break;
		case 90: printf("\n Incorrect sped\n\n"); //unneeded
	}
	return (0);
}
