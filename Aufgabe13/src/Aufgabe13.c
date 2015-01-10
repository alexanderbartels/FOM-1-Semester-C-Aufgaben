/*
 ============================================================================
 Name        : Aufgabe13.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


#define MAX 100

int main(void) {

	FILE *dat;
	char puffer;

	dat = fopen("daten.txt", "r");

	while (!feof(dat)) {
		fscanf(dat, "%c", &puffer);
		printf("%c", puffer);
	}

	if (dat) {
		printf("Alles OK\n");
	} else {
		perror("fopen");
		printf("Fehler\n");
	}

	return EXIT_SUCCESS;
}
