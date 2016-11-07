#define _CRT_SECURE_NO_WARNING
#define _CLS system("cls)
#define PAUSE systuem("pause")
#include<stdio.h>
#include<stdlib.h>
main() {
	//  variables
	int miles = 0;
	float weight = 0;
	float weightCost = 0;
	float milesCost = 0;
	float totalCost = 0;

	// input
	printf("enter the weight of the package: ");
	scanf("%f", &weight);

	printf("enter the miles to ship the package:");
	scanf("%i", &miles);

	//process
	if (weight <= 15)
		weightCost = 15;
	else
		weightCost = 15 + (weight - 15)*.5;

	milesCost = miles / 500 * 10;

	if (miles % 500 != 0)
		 milesCost += 10;
	totalCost = milesCost + weightCost; 

	//output
	printf("cost of ship based on weight %f \n", weightCost);
	printf("cost of the ship based on miles %f \n", milesCost);
	printf(" total cost %f \n", totalCost);
	PAUSE; 
}