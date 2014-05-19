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


void polling()
{
	int x = 0; //loop counter
	int r = 0; //random number
	int q[10] = {15}; //initializes all elements to 15 because 15 doesnt correspond to any of the interrupts (nothing will happen)
	int qIter = 0; //first element of q

	while(x <= 30)	//run for 30 loops
	{
		printf("CPU running as normal \n");
		if((x % 5) == 0){ //if this loop is divisible by 5, run all the interrupts that have been loaded
			printf("Polling for interrupts \n");
			for(int e = 0; e < 10; e++){   //iterate through q
				if(q[e] < 12)		//if q[e] is valid (0-11)
				{	
					call_ISR(IV[q[e]]); //call the appropriate interrupt method
				}
			}
		}
		r = rand()*40; //once things have either been executed or not, randomize r
		if(r < 12){   //if r is valid (0-11)
			q[qIter] = r; //add r to q
			qIter++;	//increment qIter so that it doesnt overwrite previous interrupt
		}

	}

	printf("Oh hey, I guess I finished! I hope you are happy, creator");
}