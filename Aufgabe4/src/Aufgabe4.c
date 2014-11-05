/*
 ============================================================================
 Name        : Aufgabe4.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*
	char a,b,c;

	setbuf(stdout, 0);

	printf("1. Buchstabe : ");
	scanf(" %c", &a);
	printf("2. Buchstabe : ");
	scanf(" %c", &b);
	printf("3. Buchstabe : ");
	scanf(" %c", &c);

	printf("Sie gaben ein : %c %c %c ", a, b, c);

	return EXIT_SUCCESS;
	*/

	// -32
	// * 5 / 9

	setbuf(stdout, 0);

	float fahrenheit, celsius;

	printf("Geben Sie eine Temperatur in Fahrenheit ein: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - 32) * 5.0 / 9.0;

	printf("%.0f Grad Fahrenheit entsprechen %.1f Grad Celsius \n", fahrenheit, celsius);


	int i;
	for(i = -4000000; i < 4000000; i++) {
		fahrenheit = i;
		celsius = (fahrenheit - 32) * 5.0 / 9.0;
			//printf("Fahrenheit und Celsius sind gleich?: %f == %f \n", fahrenheit, celsius);

		if (fahrenheit == celsius) {
			printf("yiiihaaaaaaaa: Grad: %f \n", fahrenheit);
		}
	}
	return 0;
}
