#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#define PAUSE system("pause")
#include<stdio.h>
#include<stdlib.h>
#define FLUSH fflush(stdin);
#include <time.h>


// prototype functions
void getBinaryNum();
void displayMenu();
void flush();
void getDie();
void getPrimeNum();
char getUserChoice();
void gettempConv();
void getTrip();

main() {
	char userChoice;
	
	do {
		CLS;

			userChoice = getUserChoice();

		switch(userChoice) {
		case 'A':// temperature converter
			gettempConv();
			break;

		case 'B': // base 10 binary numbers
			getBinaryNum();
			break;

		case 'C': // how far can you go
			getTrip();
			break;

		case 'D':// list all prime numbers
			getPrimeNum();
			break;

		case 'E':// display the roll of two die
			getDie();
			break;

		case 'Q': // QUIT THE PROGRAM
			printf("Thanks for using my code...bye :)\n");
			break;

		default:
			printf("INVALID SELECTION...TRY AGAIN!\n");
			break;
		} // end switch
		PAUSE;
	} while (userChoice != 'Q');
		PAUSE;
}// end main 
void getBinaryNum() {
	system("COLOR F0");// back white text black 
	

	printf("\t--------------                         -----------------\n");
	printf("\t                Convert Binary Numbers                    \n");
	printf("\t============== ----------------------- =================\n");

	int decimal, quotient;
	int binary[100], i = 1, j;

	do {
		printf("Enter a Decimal Number: \n");
		scanf("%i", &decimal);

		if (decimal < 1 || decimal > 100) {
			printf("Please enter a number between 1 and 100. \n");
			PAUSE;

		} // end if
	} while (decimal < 1 || decimal > 100);

	quotient = decimal;

	while (quotient != 0) {

		binary[i++] = quotient % 2;
		quotient /= 2;

	} // end while

	printf("The binary equivalent of %i is: ", decimal);
	for (j = i - 1; j > 0; j--) {
		printf("%i", binary[j]);
	} // end for

	printf("\n");

}// end binary num
void displayMenu() {
	system("COLOR F0");// back white text black 

	printf("==================================\n");
	printf("=========M A I N   M E N U========\n");
	printf("==================================\n");
	printf("A. Temperature Converter\n");
	printf("B. Base 10 to Binary Number\n");
	printf("C. How far can your go?\n");
	printf("D. List all prime numbers between 1 and 100\n");
	printf("E. Display the roll of two die\n");
	printf("Q. Quit.\n");
	printf("Enter your selection: \n");
}// end display menu
void flush() {
	while (getchar() != '\n');
}// end flush
void getDie() {
	system("COLOR F0");// back white text black 
	printf("\t --------------                       -----------------\n");
	printf("\t                 The Roll of two die                   \n");
	printf("\t ============== --------------------- =================\n");
	// Roll 2 Die
	// Written by Camille Garcia

	// declare variables here
	int i = 0;
	int dieOne;
	int dieTwo;

	srand((unsigned)time(NULL)); // seed the random number function

	for (i = 1; i > 0; --i) {
		dieOne = (rand() % 6) + 1;

		dieTwo = (rand() % 6) + 1;

		// DIE ONE
		if (dieOne == 1) {
			printf("    _______ \n");
			printf("   /\\      \\ \n");
			printf("  /  \\   o  \\ \n");
			printf(" /    \\ ____ \\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		else if (dieOne == 2) {
			printf("    _______ \n");
			printf("   /\\   o  \\ \n");
			printf("  /  \\      \\ \n");
			printf(" /    \\ __o_ \\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		else if (dieOne == 3) {
			printf("    _______ \n");
			printf("   /\\   o  \\ \n");
			printf("  /  \\   o  \\ \n");
			printf(" /    \\ __o_ \\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		else if (dieOne == 4) {
			printf("    _______ \n");
			printf("   /\\ o   o\\ \n");
			printf("  /  \\      \\ \n");
			printf(" /    \\ o___o\\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		else if (dieOne == 5) {
			printf("    _______ \n");
			printf("   /\\ o   o\\ \n");
			printf("  /  \\   o  \\ \n");
			printf(" /    \\o____o\\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		else {
			printf("    _______ \n");
			printf("   /\\o    o\\ \n");
			printf("  /  \\o    o\\ \n");
			printf(" /    \\o____o\\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		// DIE TWO
		if (dieTwo == 1) {
			printf("    _______ \n");
			printf("   /\\      \\ \n");
			printf("  /  \\   o  \\ \n");
			printf(" /    \\ ____ \\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		else if (dieTwo == 2) {
			printf("    _______ \n");
			printf("   /\\   o  \\ \n");
			printf("  /  \\      \\ \n");
			printf(" /    \\ __o_ \\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		else if (dieTwo == 3) {
			printf("    _______ \n");
			printf("   /\\   o  \\ \n");
			printf("  /  \\   o  \\ \n");
			printf(" /    \\ __o_ \\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		else if (dieTwo == 4) {
			printf("    _______ \n");
			printf("   /\\ o   o\\ \n");
			printf("  /  \\      \\ \n");
			printf(" /    \\ o___o\\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		else if (dieTwo == 5) {
			printf("    _______ \n");
			printf("   /\\ o   o\\ \n");
			printf("  /  \\   o  \\ \n");
			printf(" /    \\o____o\\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}
		else {
			printf("    _______ \n");
			printf("   /\\o    o\\ \n");
			printf("  /  \\o    o\\ \n");
			printf(" /    \\o____o\\ \n");
			printf(" \\    /      / \n");
			printf("  \\  /      / \n");
			printf("   \\/_____ / \n");
			printf("              \n");
		}

	} // End For loop
}// end get die
void getPrimeNum() {
	system("COLOR F0");// back white text black 
	printf("\t ==============                        =================\n");
	printf("\t               PRIME NUMBERS FROM 1-100                 \n");
	printf("\t ==============                        =================\n");
	printf("2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97.\n");
}// end prime num
char getUserChoice() {
	char result;
	displayMenu();
	scanf("%c", &result); FLUSH;
	result = toupper(result);
	return result;
}// end userSelection
void gettempConv() {
	system("COLOR F0");// back white text black 
	float celsius, fahrenheit;
	int urChoice = 0;
	float a = 1.8;
	int b = 32;

	printf("\t  ************************************** \n");
	printf("										   \n");
	printf("\t  *********Temperature Converter********* \n");
	printf(" 										   \n");
	printf("\t  ************************************** \n \n");

	printf(" From fahrenheit to celsius select 1. \n");
	printf(" From Celsius to Fahrenheit select 2. \n");
	scanf("%i", &urChoice);

	switch (urChoice) {

	case 1:
		printf("enter the temperature Fahrenheit : ");
		scanf("%f", &fahrenheit);

		celsius = (fahrenheit - b) / a;

		printf(" F= %.2f  =========> C=  %.2f . \n", fahrenheit, celsius);
		break;

	case 2:
		printf(" enter the temperature Celsius :");
		scanf("%f", &celsius);

		fahrenheit = (celsius*a) + b;
		printf(" C= %.2f  =======> F= %.2f . \n", celsius, fahrenheit);
		break;

	default:
		printf(" INVALID SELECTION-------please select 1 or 2. \n");
		break;
	}// end switch
}// end gettemp
void getTrip() {
	system("COLOR F0");// back white text black 
	float amgv = 0;
	float gazPrice = 0;
	float monTrip = 0;
	float gallGet = 0;
	float timesFill = 0;
	float milesGo = 0;

	printf("\t --------------                       -----------------\n");
	printf("\t                 how Far Can You Go?                   \n");
	printf("\t ============== --------------------- =================\n");
	do {
		printf(" Enter the average miles per gallon for your vehicle (positive number): ");
		scanf("%f", &amgv);
	} while (amgv < 0);
	do {
		printf(" Enter the price of a gallon of gas (positive number): ");
		scanf("%f", &gazPrice);
	} while (gazPrice < 0);
	do {
		printf(" Enter money you own for the trip (positive number): ");
		scanf("%f", &monTrip);
	} while (monTrip < 0);


	gallGet = monTrip / gazPrice;
	timesFill = (gallGet / 20);
	milesGo = amgv*gallGet;

	printf("---------------------------------------------------------\n");
	printf(" Before running out of money, you can drive %.2f \n", milesGo);
	printf(" You stopped and filled the gas %.2f times \n", timesFill);
}// end gt trip
