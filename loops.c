/*
	LOOPS:
	1. Preincrement vs postincrement
	2. For loop
	3. While loop
	4. Do-while loop
*/

#include <stdio.h>
#include <stdbool.h>

int main(){

	int x = 0;
	int y = 0;
	int z = 0;

	/* Preincrement vs. postincrement */
	printf("%d\n", ++y);
	printf("%d\n", z++);

	/* FOR LOOPS USING ++X */
	for( x = 0; x < 10; ++x ){
		printf("forloop: x = %d\n", x);
	}
	printf("x final = %d.\n", x);

	/* WHILE LOOPS */
	x = 0;

	while(x < 10){
		printf("whileloop: x = %d\n", x);
		++x;
	}
	printf("x final = %d.\n", x);

	/* DO-WHILE LOOP */
	x = 0;

	do{
		printf("do-whileloop: x = %d\n", x);
		++x;
	}while(x < 10);
	printf("x final = %d.\n", x);

	/* while true */
	x = 0;
	bool b = true;

	while(b){
		printf("my loop: x = %d.\n", ++x);

		if( x == 10)
		{b = false;}
	}

	return 0;
}