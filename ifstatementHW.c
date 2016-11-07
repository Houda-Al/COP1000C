#define CLS system("cls")
#define PAUSE system("pause")
#include <stdio.h>
#include<stdlib.h>

main() {
	//variables 

	int  distance = 0, weight = 0;
	int extra1 = 15;
	float	extra2 = 0.0;
	float totalDistance =0.0;
	float totalCost = 0;



	//input
	printf(" this is the weight of the item. \n");
	scanf_s("%i", &weight);
	printf("this is the distance of the shipping. \n");
	scanf_s("%i", &distance);

	//process
	extra2 = 15 + (weight - 15)*0.5;
	totalDistance = (distance / 500) * 10;
	
	//output

	if (weight <= 15) {
		totalCost += 15;
	}
	else if (weight > 15) {
		totalCost += extra2;
	}

	if (distance > 500) {
		totalCost += totalDistance;
	} 
	printf("%2f\n", totalCost);

	PAUSE; 

	}