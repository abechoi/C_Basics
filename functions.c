/*
	FUNCTIONS:
	1. Prototype of functions
	2. Calling funcions
	3. Defining functions
	4. Return void
*/

#include <stdio.h>
#include <stdlib.h>

int multiply(int a, int b);
void myVoid(char str[]);

int main(){

	int x = rand();
	int a, b;
	char str[] = "String of chars";
	
	/* Print x */
	printf("x = %d.\n", x);

	/* Prompt user for 2 numbers */
	printf("Enter two numbers to multiply: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("c = %d.\n", multiply( a, b));

	/* A function without an input or output/return */
	myVoid(str);
	
	getchar();
}

int multiply( int a, int b){
	return a * b;
}

void myVoid( char str[]){
	
	printf("%s\n", str);
}