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
	r = rand();

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
			Sleep(2000);
			//call_ISR(IV[r]);
		default:
			printf("Still chuggin' along");
			break;
		}

	}



	return 0;
}