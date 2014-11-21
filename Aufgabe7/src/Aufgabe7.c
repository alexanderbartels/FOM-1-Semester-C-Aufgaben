/*
 ============================================================================
 Name        : Aufgabe7.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	setbuf(stdout, 0);

	int i; // Zaehl-Variable fuer die for-Schleifen - 1. Dimension
	int j; // Zaehl-Variable fuer die for-Schleifen - 2. Dimension

	// Ausfgabe 7
	printf("Aufgabe 7 a) \n");
	printf("============ \n\n");

	// zwei dimensionales array fuer die Zufalszahlen
	int randomNumbers[5][6];

	// Zufallszahlen generieren
	srand(time(0));
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			randomNumbers[i][j] = (rand() % 49) + 1;
		}
	}

	// Zufallszahlen ausgeben
	for (i = 0; i < 5; i++) {
		printf("Ziehung der %1d. Woche:", (i + 1));
		for (j = 0; j < 6; j++) {
			printf("%4d", randomNumbers[i][j]);
		}
		printf("\n");
	}


	// Aufgabe 7 b)
	printf("\n\nAufgabe 7 b) \n");
	printf("============ \n\n");

	int wiederholungen[5] = {0};
	int k;

	// Zufallszahlen generieren
	srand(time(0));
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			randomNumbers[i][j] = (rand() % 49) + 1;
		}

		// pruefen ob die Zahlenreihe valid ist
		for (j = 0; j < 6; j++) {
			// i und j ergeben den index der zu pruefenden zahl
			for (k = 0; k < 6; k++) {
				if (j != k && randomNumbers[i][j] == randomNumbers[i][k]) {
					// es gibt doppelte Zahlen in der Zahlenreihe
					wiederholungen[i] = wiederholungen[i] + 1;
					// i minus 1, um einen erneuten anlauf zu starten
					i--;

					k = -1;
					break;
				}
			}

			if (k == -1) { break; }
		}
	}

	// Zufallszahlen ausgeben
	for (i = 0; i < 5; i++) {
		printf("Ziehung der %1d. Woche:", (i + 1));
		for (j = 0; j < 6; j++) {
			printf("%4d", randomNumbers[i][j]);
		}
		printf(" // Wiederholungen: %4d\n", wiederholungen[i]);
	}

	return EXIT_SUCCESS;
}
