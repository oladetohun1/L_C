/*
 * creating a struct
 * naming a var
 * how to initialize in structaccessing struct members
 * pointers,array, e. t. c
 */

// creating a struct
struct korede
{
	char _name[30];
	int age [2];
	float allowance;
}k;//var is declared

//can also be declared in this manner
/*
 */
struct point
{
	int x, y;
};
int main()
{
	struct point p1 = {0, 1};
	//Accessing members of point p1
	p1.x = 20;//updating value of p1
	printf("x = %d, y = %d", p1.x, p1.y);
	return (0);

}; //The variable p1 is declared like a normal variable
/*
 * Inorder to initialize the varialble
 * you have to use curly braces
 * for example putting p1 = {0,1} as shown above
 */

