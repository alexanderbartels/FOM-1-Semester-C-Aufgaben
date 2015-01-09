/*
 ============================================================================
 Name        : Aufgabe11.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 999;
	int *p_i;// typisierter Zeiger
	void *ptr;// untypisierter Zeiger

	p_i = &i;// Referenz auf i erzeugen
	printf ("%p %i %p %i\n", &i, i, p_i, *p_i);

	*p_i = 666;// Inhalt der Speicheradresse verändern
	printf ("%p %i %p %i\n", &i, i, p_i, *p_i);

	ptr = &i;// Nur Speicheradresse, Typisierung bei Ausgabe
	printf ("%p %i %p %i\n", &i, i, ptr, *(int*)ptr);

	return EXIT_SUCCESS;
}
