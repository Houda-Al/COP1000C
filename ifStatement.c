#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#define PAUSE system("pause")
#include<stdio.h>
#include<stdlib.h>

main() {
	int num;

	printf("enter any integer :");
	scanf("%i", &num);

	if (num % 2 == 0 )

		printf("the number %i is EVEN \n", num);

	else 
		printf("the number %i is ODD \n", num);


	PAUSE; 
}