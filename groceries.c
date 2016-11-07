#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#define PAUSE system("pause")
#include<stdio.h>
#include<stdlib.h>

main() {

	// input
	float w1 = 0, w2 = 0, w3 = 0;
	float sum = 0;
	float average = 0;
	
	printf("groceries of week1 :");
	scanf("%f", &w1);
	printf("groceries of week2 :");
	scanf("%f", &w2);
	
	printf("groceries of week3 :");
	scanf("%f", &w3);
	
	//process + output

	if (w1 < 50) {
		printf("You must be starving \n");

	}else if (w1 >= 50 && w1 < 200) {
		printf("You are eating well \n");

	}else if (w1 >= 200) {
		printf("you are going to get fat \n");

	}
	
	if (w2 < 50) {
		printf("You must be starving \n");

	}else if (w2 >= 50 && w2 < 200) {
		printf("You are eating well \n");

	}else if (w2 >= 200) {
		printf("you are going to get fat \n");

	}
	
	if (w3 < 50) {
		printf("You must be starving \n");

	}else if (w3 >= 50 && w3 < 200) {
		printf("You are eating well \n");

	}else if (w3 >= 200) {
		printf("you are going to get fat.\n ");
	}

	if (w2 > w1) {
		printf("Are you eating more ? \n");

	}

	if (w3 < (w2 + w1)) {
		printf("Are you on a diet \n");

	}
			
	average = (w1 + w2 + w3) / 3;
	
		printf("This is the average amount spent on groceries each week: %f \n", average);

	
			
			PAUSE;

}