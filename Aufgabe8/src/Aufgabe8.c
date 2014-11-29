/*
 ============================================================================
 Name        : Aufgabe8.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int zaehler = 0;

	// strings initialisieren
	char str1[256] = "C als erste Programmiersprache....";
	char str2[256] = "c als erste programmiersprache.";
	char str3[256] = {'\0'};

	// String zeichen fuer zeichen vergleichen
	for (zaehler = 0; zaehler < sizeof(str1); zaehler++) {
		if (str1[zaehler] == '\0' || str2[zaehler] == '\0') {
			break;
		}

		if (str1[zaehler] == str2[zaehler]) {
			str3[zaehler] = ' ';
		} else {
			str3[zaehler] = '^';
		}
	}

	// Unterschiede in der Laenge feststellen
	int dif = strlen(str1) - strlen(str2);
	if (dif < 0) {
		dif *= -1;
	}

	// Unterschiede in der Laenge mit X markieren
	for ( int i = zaehler; i < (zaehler + dif); i++) {
		str3[i] = 'X';
	}

	// Ausgabe
	printf("String 1:     %s \n", str1);
	printf("String 2:     %s \n", str2);
	printf("Unterschiede: %s \n", str3);

	return EXIT_SUCCESS;
}
