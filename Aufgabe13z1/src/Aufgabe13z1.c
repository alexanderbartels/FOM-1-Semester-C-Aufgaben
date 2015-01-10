/*
 ============================================================================
 Name        : Aufgabe13z1.c
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

	dat = fopen("daten.txt", "r");

	while (!feof(dat)) {
		fscanf(dat, "%c", &puffer);
		printf("%c", puffer);

		charCount++;

		if (charCount >= MAX_CHARS) {
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
