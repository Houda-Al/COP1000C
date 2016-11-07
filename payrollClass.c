#define _CRT_SECURE_NO_WARNINGS
#define _CLS system("cls")
#define PAUSE system("pause")
#include <stdio.h>
#include<stdlib.h>

main() {
	//input
	float const FEDRATE = 0.27;
	float const MEDRATE = 0.14;
	float const payHours = 40.0; 
	float hoursWorked = 0.0, hourlyRate = 0.0, regPay = 0.0;
	float otPay = 0.0, grossPay = 0.0, fedTax = 0.0;
	float medIns = 0.0, netPay = 0.0;

	//process
	// diplay inside PAYROLL
	printf("Houly Rate:");
	scanf("%f", &hourlyRate);
	
	printf("Hours worked:");
	scanf("%f", &hoursWorked);

	// if inside payroll
	if (hoursWorked <= payHours) {
		regPay = hoursWorked*hourlyRate;
		otPay = 0;
	}
	else {
		regPay = hourlyRate * payHours;
		otPay = hourlyRate* 1.5 *(hoursWorked - payHours);
	}
	// each by it self ( functions) 
	grossPay = regPay + otPay;
	fedTax = grossPay*FEDRATE;
	medIns = grossPay*MEDRATE;
	netPay = grossPay - (fedTax + medIns);
	
	//outputs
	// output functions 
	printf("Regular Pay: %f \n", regPay);
	printf("OT Pay:%f \n", otPay);
	printf("Gross Pay:%f  \n", grossPay);
	printf("Federal Tax (27%): %f \n", fedTax); 
	printf("Medical Insurance (14%): %f\n", medIns);
	printf("Net Pay: %f \n", netPay);
	

	PAUSE; 
}