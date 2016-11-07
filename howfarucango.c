#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#define PAUSE system("PAUSE")
#include<stdio.h>
#include<stdlib.h>


main() {
	float amgv = 0;
	float gazPrice = 0;
	float monTrip= 0;
	float gallGet = 0;
	float timesFill = 0;
	float milesGo = 0;
	float lostGaz = 0;

	printf(" Enter the avarge miles per gallon for your vehicule :");
		scanf("%f", &amgv);
	printf(" Enter the price of a gallon of gaz: ");
		scanf("%f", &gazPrice);
	printf(" Enter money you own for the trip: ");
		scanf("%f", &monTrip);
		
		
		gallGet = monTrip / gazPrice;
		timesFill= (gallGet / 20);
		milesGo = amgv*gallGet;

		printf("---------------------------------------------------------\n");
		printf(" Before running out of money, you can drive %.2f \n", milesGo);
		printf(" You stoped and filled the gaz %.2f times \n", timesFill);

	PAUSE;
}