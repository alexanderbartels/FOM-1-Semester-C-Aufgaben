/*
 ============================================================================
 Name        : Aufgabe13z3.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 40
#define WORD_PUFFER 255

void clearStringPuffer (char str[]) {
	int i;
	for (i = 0; i < WORD_PUFFER; i++) {
		str[i] = 0;
	}
}

int main(void) {

	FILE *dat;
	char puffer;
	char word[WORD_PUFFER]= {0};

	int charCount = 0, wordCharCount = 0;

	// Textdatei mit Leserechten oeffnen
	dat = fopen("daten.txt", "r");

	// Solange das Ende der Datei nicht erreicht ist ...
	while (!feof(dat)) {

		// naechstes Wort einlesen
		fscanf(dat, "%c", &puffer);

		if (puffer != ' ' && puffer != '\n') {
			word[wordCharCount] = puffer;
			wordCharCount++;
		} else {

			// pruefen ob das eingelesene Wort noch in die Zeile passt
			if ((charCount + wordCharCount) > MAX_CHARS) {
				printf("\n");
				charCount = 0;
			}

			// Eingelesenes Wort ausgeben
			printf("%s", word);
			charCount += wordCharCount;
			wordCharCount = 0;
			clearStringPuffer(word);

			// Zeilenumbruch oder Leerzeichen
			printf("%c", puffer);
			charCount++;

			if (puffer == '\n') {
				charCount = 0;
			}
		}
	}

	printf("====================================\n\n\n");

	if (dat) {
		printf("Alles OK\n");
	} else {
		perror("fopen");
		printf("Fehler\n");
	}

	return EXIT_SUCCESS;
}

/*
int main(void) {

	FILE *dat;
	char puffer;
	char word[255];

	int charCount = 0, wordCharCount = 0;

	// Textdatei mit Leserechten oeffnen
	dat = fopen("daten.txt", "r");

	// Solange das Ende der Datei nicht erreicht ist ...
	while (!feof(dat)) {

		// naechstes Wort einlesen
		fscanf(dat, "%s", word);
		wordCharCount = strlen(word);

		// Wenn das Wort nicht mehr in die Zeile passt -> einen Zeilenumbruch erzeugen
		if (charCount + wordCharCount > MAX_CHARS) {
			printf("\n");
			charCount = 0;
		}

		// Eingelesenes Wort ausgeben
		printf("%s", word);

		// debug ...
		// printf("\n charCount = %d, wordCharCount = %d \n", charCount, wordCharCount);
		charCount += wordCharCount;

		// Wenn die Datei noch nicht zuende ist,
		// auch das naechste Zeichen (Leerzeichen, Zeilenumbruch) einlesen und schreiben
		if (!feof(dat)) {
			fscanf(dat, "%c", &puffer);
			printf("%c", puffer);

			if (puffer == '\n') {
				charCount = 0;
			} else {
				charCount++;
			}
		}

	}

	printf("\n\n\n====================================\n\n\n");

	if (dat) {
		printf("Alles OK\n");
	} else {
		perror("fopen");
		printf("Fehler\n");
	}

	return EXIT_SUCCESS;
}
*/
