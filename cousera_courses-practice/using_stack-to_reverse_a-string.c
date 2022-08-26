/**
 * using stack to reverse a string
 */
#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 1000
#define EMPTY - 1
#define FULL (MAX_LEN - 1)

typedef struct stack{ 
	char s[MAX_LEN];
	int top;
}stack;

void reset(stack *stk){ stk -> top = EMPTY;}
void push(char c, stack *stk)
{
	stk-> top++;
	stk-> s[stk-> top] = c;
}

char pop(stack *stk){ return(stk-> s[stk-> top--]); }
char top(const stack *stk){ return(stk-> s[stk-> top]); }

int is_empty(const stack *stk){ return (stk-> top === EMPTY);}
int is_full(const stack *stk){ return (stk-> == FULl);}

