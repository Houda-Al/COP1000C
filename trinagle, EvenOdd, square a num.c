// TOPIC: SWITCH STATEMENTS
#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system("pause")
#define CLS system("cls")
#include <stdio.h>
#include <stdlib.h>

main() {
	// declare variables here
	int userChoice = 0;
	int number;
	int i, j;
	// body
	do {
		CLS;
		printf("=======================================\n");
		printf("=======  M A I N      M E N U   =======\n");
		printf("=======================================\n");
		printf("1. Square a number\n");
		printf("2. Even or Odd\n");
		printf("3. Create a Triangle\n");
		printf("4. Quit the program\n\n");
		printf("Enter your selection: ");
		scanf("%i", &userChoice);

		switch (userChoice) {
		case 1: // Square a number
			printf("Please enter an Integer value: ");
			scanf("%i", &number);
			printf("The square of %i is %i.\n",
				number, number * number);
			PAUSE;
			break;
		case 2: // Display if Even or Odd
			printf("Please enter an Integer value: ");
			scanf("%i", &number);
			if (number % 2 == 0)
				printf("The number is EVEN\n");
			else
				printf("The number is ODD\n");
			PAUSE;
			break;
		case 3: // Create a triangle
			do {
				printf("Please enter rows of triangle between 2-50: ");
				scanf("%i", &number);
				if (number < 2 || number > 50) {
					printf("YOU MUST ENTER BETWEEN 2 AND 50 ONLY!\n");
					PAUSE;
				} // end if
			} while (number < 2 || number > 50);

			// If I get here I got a good number for rows!

			for (i = 0; i < number; i++) {
				for (j = 0; j <= i; j++)
					printf("*");
				printf("\n");

			} // end for the outer loop
			PAUSE;
			break;
		case 4: // QUIT THE PROGRAM
			printf("Thanks for using my code. . .BYE\n");
			PAUSE;
			break;
		default:
			printf("INVALID SELECTION. . .TRY AGAIN\n");
			PAUSE;
			break;


		}


	} while (userChoice != 4);





} // end of main
