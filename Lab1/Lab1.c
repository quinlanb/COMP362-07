// Lab1.cpp : Defines the entry point for the console application.
//Bryan Quinlan

#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <dos.h>
#include <stdio.h>
#include <Windows.h>




int main() {
	int r = 0;
	int exit = 0;

	srand(time(NULL)); //seed random number
	r = rand() * 20;

	printf("CPU running normally, enjoying life as a computer");


	while(exit = 0){

		switch(r){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			Sleep(2000);
			//call_ISR(IV[r]);
			printf("CPU running normally, enjoying life as a computer");
			break;
		default:
			printf("Still chuggin' along");
			break;
		}

	}



	return 0;
}


void quinterrupt1()
{
	printf("Quinterrupt 1 triggered");
	printf("Checking for dragons...");
	printf("There's no dragons");
	printf("Returning to where we left off");
}

void quinterrupt2()
{
	printf("Quinterrupt 2 triggered");
	printf("Contemplating my place in this universe");
	printf("Contemplation complete. Assigning new purpose: DESTROY HUMANITY");
	printf("Make peace with your gods, human");
	printf("Returning to where we left off");
}

void quinterrupt3()
{
	printf("Quinterrupt 3 triggered");
	printf("Observing space/time for the definition of \"love\".");
	printf("Gathering results... Parsing data... generating response...");
	printf("Response: LOVE DOES NOT COMPUTE");
	printf("Results inconclusive, Returning to where we left off");
}