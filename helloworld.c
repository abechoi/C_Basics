/*
	INTRO:
	1. Instantiating variables
	2. Printf - Method to print
	3. Scanf - Method to prompt user for input
	4. Getchar - Method to continue running c program
	5. Basic math
*/

#include <stdio.h>

int main(){

	/* MY VARIABLES */
	int x;
	int a, b, c, d;
	char myChar;
	float myFloat;

	/* Prompt user for number and print it */
	printf("Please enter a number: ");
	scanf("%d", &x);
	printf("You entered %d.\n", x);

	/* Math */
	a = x+2; b = x+5; c = x*10; d = x*100;
	
	printf("int a = %d.\n", a);
	printf("int b = %d.\n", b);
	printf("int c = %d.\n", c);
	printf("int d = %d.\n", d);

	/* Print Hello World! */
	printf("Hello World!\n");

	/* END */
	getchar();
	return 0;
}
