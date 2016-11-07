#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#define PAUSE system ("PAUSE")
#include<stdio.h>
#include<stdlib.h>
#define FLUSH flushIt();


main() {
	char firstName[50];
	int i = 0;
	
	printf("enter you name followed with a number \n");

	for (i = 0; i > 0; i++) {
		do {

			printf("hello %c %i", firstName, i + 1);
			scanf("%s", &firstName); FLUSH;
			

		} while (i < 0);
	}

	PAUSE; 
}
