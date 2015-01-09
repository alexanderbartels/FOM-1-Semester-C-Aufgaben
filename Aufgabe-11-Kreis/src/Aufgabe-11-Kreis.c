/*
 ============================================================================
 Name        : Aufgabe-11-Kreis.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int kreis (double radius, double *flaeche, double *umfang) {
	const double PI = 3.1415926536;

	// bei einem negativen radius signalisieren wir einen Error durch die sofortige Rueckgabe von 0
	if (radius < 0) {
		return 0;
	}

	// umfang berechnen
	*umfang = 2 * PI * radius;

	// flaeche berechnen
	*flaeche = PI * (radius * radius);

	return 1;
}

int main(void) {

	double f; // Variable fuer die Flaeche anlegen
	double u; // Variable fuer den Umfang anlegen
	double r; // Variable fur den Radius anlegen

	// von 0.5 bis 10 in 0.5er Schritten
	for (int i = 1; i <= 20; i++) {
		r = i * 0.5; // Radius der verwendet werden soll, ausrechnen
		kreis(r, &f, &u); // Kreis funktion aufrufen
		printf("Radius: %6.2f -> Umfang %6.2f, Flaeche %6.2f \n", r, u, f);
	}

	return EXIT_SUCCESS;
}
