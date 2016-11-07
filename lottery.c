#define _CRT_SECURE_NO_WARNINGS 
#define PAUSE system ("pause")
#include <ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {

	int const LB = 0;
	int const UB = 999;
	int i;
	int ttl;
	int theFavoriteNo = 0;
	int theDailyNo = 0;
	int winCount = 0;
	int money = -395;
	int moneyM;
	int lossCount = 0;
	int count = 1;
	srand((unsigned)time(NULL));

	printf("Enter your favorite number: \n ");
	scanf("%i", &theFavoriteNo);


	for (i = 0; i < 365; i++) {
		theDailyNo = LB + rand() % (UB - LB + 1);
	
		count++;
		if (theFavoriteNo == theDailyNo) {
			winCount++;
		}
	}
	moneyM = (winCount * 500) + money;

	printf("you're number matches the winning number %i times! \n", winCount);
	printf("your balance is %i \n",  moneyM);
	PAUSE;
}						