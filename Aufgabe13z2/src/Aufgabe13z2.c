/*
 ============================================================================
 Name        : Aufgabe13z2.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_CHARS 40

int main(void) {

	FILE *dat;
	char puffer;

	int charCount = 0;

	char breakChar = ' ';

	dat = fopen("daten.txt", "r");

	while (!feof(dat)) {

		fscanf(dat, "%c", &puffer);
		printf("%c", puffer);

		if (puffer == '\n') {
			charCount = 0;
		} else {
			charCount++;
		}


		// printf ("\npuffer: %c\n", puffer);
		// printf ("breakChar: %c\n", breakChar);
		if (charCount >= MAX_CHARS && puffer == breakChar) {
			printf("\n");
			charCount = 0;
		}
	}

	if (dat) {
		printf("Alles OK\n");
	} else {
		perror("fopen");
		printf("Fehler\n");
	}

	return EXIT_SUCCESS;
}
