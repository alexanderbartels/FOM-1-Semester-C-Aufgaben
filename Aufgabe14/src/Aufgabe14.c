/*
 ============================================================================
 Name        : Aufgabe14.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void usage() {
	printf("Usage: Aufgabe14 <Anzal der Werte> <größte Zahl (MAX)> <Dateiname>");
}


void generateNumbers(int count, int max, int numbers[]) {
	int i; // Zaehl-Variable fuer die for-Schleifen - 1. Dimension


	// Zufallszahlen generieren
	srand(time(0));
	for (i = 0; i < count; i++) {
			numbers[i] = (rand() % max) + 1;
	}
}

int main(int argc, char *argv[]) {
	if (argc != 4) {
		usage();
		return -1;
	}

	// convert arguments
	int count = atoi(argv[1]);
	int max   = atoi(argv[2]);
	char *fileName = argv[3];

	// print arguments
	printf("Arguments: count=%d, max=%d, file name=%s\n", count, max, fileName);

	int numbers[count];
	generateNumbers(count, max, numbers);

	// Datei zum schreiben öffnen
	FILE *ziel = fopen(fileName, "w");

	if (ziel == NULL) {
		printf("Fehler: %s konnte nicht zum schreiben geöffnet werden!", fileName);
		return -1;
	}

	int i;

	for(i=0; i < count; i++) {
		fprintf(ziel, "%d\n", numbers[i]);
		printf("Zahl = %d ", numbers[i]);
		printf("\n");
	}

	fclose (ziel);
	printf ("Fertig ...\n");
	return EXIT_SUCCESS;
}
