/*
 ============================================================================
 Name        : Aufgabe9.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int durch4 (int jahr) {
	return jahr % 4 == 0 ? 1: 0;
}

int ausnahme1 (int jahr) {
	return jahr % 100 == 0 ? 0 : 1;
}

int ausnahme2 (int jahr) {
	return jahr % 400 == 0 ? 1 : 0;
}

int main(void) {

	int datum, istSchaltjahr;

	do {
		setbuf (stdout,0);
		printf("Bitte ein Jahr eingeben: ");
		scanf(" %d",&datum); fflush (stdin);

		if (datum < 1582) {
			break;
		}

		istSchaltjahr = durch4(datum) && !ausnahme1(datum) && ausnahme2(datum);

		printf("%d ist %s Schaltjahr!\n\n", datum, istSchaltjahr == 1 ? "ein" : "kein");
	} while(1);

	printf("Programm-Ende!");

	return EXIT_SUCCESS;
}
