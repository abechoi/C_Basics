/*
	IF STATEMENTS:
	1. Basic if statements
	2. Else-if chain
*/

#include <stdio.h>

int main(){

	int a, b, c, d;
	a = 2; b = 5; c = 10; d = 100;

	/* Since a = 2, a == 2 is true and returns a 1 */
	if( a == 2)
		printf("a == 2 is TRUE!\n");
	else
		printf("a == 3 is FALSE!\n");

	/* ELSE IF*/
	if( a >= b )
		printf("a >= b is TRUE!\n");
	else if( a < b )
		printf("a < b is TRUE!\n");
	else if(22)
		printf("TRUE!\n");
	else
		printf("FALSE!\n");

	return 0;
}