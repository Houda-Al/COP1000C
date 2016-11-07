#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#define PAUSE system("pause")
#include<stdio.h>
#include<stdlib.h>

/* ========loop Notes======
3different types of loops:
1.While  :while ( cond) { do this}
//( pretest Loop)+ min 0 or more
2.whle do: Do { do this }{ while (cond);
//(post test loop)+ min 1 or more
3.for    : For ( cond Var; cond; incremant){ do this}
//( pretest loop + min0 or more

3.for; when i know the number of passes + when you are using ARRAYS
2.do while; with a meny system
1.while; general purpose
=======================*/

main() {
	int Class = 0;
	int count = 0;
	
	while (count > 100) {
		printf("%i. Houda Alaafya \n", count + 1);
		count++;
	}
	
	// Do WHile:recall the variable
	 count = 0;
	do {
		printf(" %i. DO WHILE: Houda Alaafya \n", count + 1);
		count++;

	}while (count <10);
	
	// For
	for( count=0; count <10; count++)
		printf(" %i. For: Houda Alaafya \n", count + 1);
	//(i; j) control loops
	

	////////////////////////////////////////////

	int total = 0;
	int maxscores = 20;
	int again = 0;
	int i = 0;
	int score = 0;

	
	for (i = 0; i < 7; i++) {

		printf(" enter score %i of: %i  ", i + 1, 7);
		scanf("%i", &score);
		total += score;
	}

	printf(" the total of the scores is %i :", total);
	//////////////////////////////////////////////////
	do {

		printf("how many scores are there: ");
			scanf(" %i", &maxscores);
			 

		for (i = 0; i < 10; i++) {

			printf(" enter score %i of %i :", i + 1, 10);
			scanf("%i", &score);
			total += score;
			printf(" the total of the scores is %i \n ", total);
			printf("enter 0 if you want to do it again");
			scanf("%i", &again);
		}


	} while (again == 1);
	

		
		
		PAUSE; 
}