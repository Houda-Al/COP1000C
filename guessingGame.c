#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define PAUSE system("pause")
#define FLUSH fflush(stdin)



main() {
	int toUpper = 0;
	int guessCount = 0;
	int myGuess;
	int theNumber;
	int const LOWERBOUND = 1;
	int const UPPERBOUND = 100;
	int const MAXGUESSES = 3;
	char playAgain = 'N';
	char wonGame = 'N';
	srand((unsigned)time(NULL)); // seed the random number function	

	do {

		guessCount = 0;
		wonGame = 'N';
		playAgain = 'N';
		theNumber = LOWERBOUND + rand() % (UPPERBOUND - LOWERBOUND + 1);
		do {
			guessCount++;
			printf("Enter guess %i of %i: ", guessCount, MAXGUESSES);
			scanf("%i", &myGuess); FLUSH;
			if (myGuess == theNumber) {
				wonGame = 'Y';
				printf("Great job you guess the number %i in %i guesses.\n", theNumber, guessCount);
			}
			else if (myGuess < theNumber)
				printf("\t\t\tYou guess to low....GUESS HIGHER!\n");
			else
				printf("\t\t\tYou guess to low....GUESS LOWER!\n");
		} while (guessCount < MAXGUESSES && wonGame == 'N');
		if (wonGame = 'N') {
			printf("You lost the game, the number was %i.\n", theNumber);
		}
		printf("Would you like to play again? [Y or N] ");
		scanf(" %c", &playAgain); FLUSH;
		playAgain = toupper(playAgain);
	} while (playAgain == 'Y');

	PAUSE;
}