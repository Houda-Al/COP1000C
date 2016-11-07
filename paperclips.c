//=====================
#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#include<stdio.h>
#include<stdlib.h>
#define PAUSE system("pause")


main() {
	int amtSold = 0, avgSold = 0, transCounter = 0;
	int totalSold = 0;

	do {

		printf("how many paper clips did you sell? :");
		scanf("%i", &amtSold);

		if (amtSold >= 0) {
			totalSold += amtSold;
			transCounter++;
		}
		else {
			avgSold = totalSold / transCounter;
			printf("no. of transactions.: %i \n ", transCounter);
			pritnf(" total papaer clips Sold; %i", totalSold);
			printf("average paper clips per transactions; %i", avgSold);

			PAUSE;
		}while (amtSold >= 0);
	}

}

#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#include<stdio.h>
#include<stdlib.h>
#define PAUSE system("pause")

main() {

	int const LB = -5;// change it 
	int const UB = 2;
	int randomNum = 0;
	int i = 0;

	srand((unsigned)time(NULL)); // seeding the rand funtion


	for (i = 0; i < 30; i++) {
		randomNum = LB + rand() % (UB + 1);
		printf("the random number is %i. \n", randomNum);

	}

	PAUSE;
}

// LOTTO NUMBER

#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#include<stdio.h>
#include<stdlib.h>
#define PAUSE system("pause")

main() {
	int const LB = 0;
	int const UB = 999;
	int winNum = 0, favNum = 0;
	int money = -365;
	int timesWon = 0;
	int i = 0;

	srand((unsigned)time(NULL)); // seeding the rand funtion

	printf(" enter your favorite number: ");
	scanf("%i", &favNum);

	for (i = 0, i < 365; i++;) {
		winNum = LB + rand() % (UB - LB + 1);
		if (winNum == favNum) {
			money += 500;
			timesWon++;
		}// end if
	}// emd while
	printf(" you now have %i money \n", money);
	printf(" you won %i times \n", timesWon);

	PAUSE;
}
