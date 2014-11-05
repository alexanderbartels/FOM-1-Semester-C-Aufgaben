/*
 ============================================================================
 Name        : Aufgabe6.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i; // Zaehl-Variable fuer die for-Schleifen

	// Ausfgabe 6
	printf("Aufgabe 6) \n");
	printf("============ \n\n");
	int a[] = {10, 20, 30, 40, 50};
	for (i=0; i < 5; i++) {
		printf("\tIndex %d -> %i\n", i, a[i]);
	}

	// Aufgabe 6 a)
	int aa[5] = {0};
	int ab[5] = {10};
	int ac[5] = {10, 20, 30};
	int ad[5] = {10, 20, 30, 40, 50, 60, 70};

	// Ausgabe von Aufgabe 6 a)
	printf("\n\nAufgabe 6 a) \n");
	printf("============ \n\n");
	for (i=0; i<5; i++) {
		printf("\tIndex %d -> aa = %2d, ab = %2d, ac = %2d, ad = %2d\n", i, aa[i], ab[i], ac[i], ad[i]);
	}


	// Aufgabe 6 b)
	// Fuer Aufgabe 6 b) koennen die Variablen aus Aufgabe 6 a) verwendet werden.

	printf("\n\nAufgabe 6 a) \n");
	printf("============ \n\n");
	for (i = 0; i < 10; i++) {
		printf("\tIndex %d -> aa = %12d, ab = %12d, ac = %12d, ad = %12d\n", i, aa[i], ab[i], ac[i], ad[i]);
	}

	return EXIT_SUCCESS;
}
