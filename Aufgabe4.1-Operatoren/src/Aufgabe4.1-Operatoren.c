/*
 ============================================================================
 Name        : 1-Operatoren.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 2;

	int result = x < 5 && 10 > 7;
	printf("x < 5 && 10 > 7 x || 0 && 7 // Ergebnis: %d \n", result);

	result =  x || 0 && 7;
	printf(" x || 0 && 7 // Ergebnis: %d \n", result);

	result = x-- || 7 && 0;
	printf("x-- || 7 && 0 // Ergebnis: %d \n", result);

	result = --x || 7 && 0;
	printf("--x || 7 && 0 // Ergebnis: %d \n", result);

	x = 7;
	result = x < 9 && x >= -5;
	printf("x < 9 && x >= -5 // Ergebnis: %d \n", result);

	x = 7;
	result = !x && x >= 3;
	printf("!x && x >= 3 // Ergebnis: %d \n", result);

	x = 7;
	result = x++ == 8 || x == 7;
	printf("x++ == 8 || x == 7 // Ergebnis: %d \n", result);

	return EXIT_SUCCESS;
}
