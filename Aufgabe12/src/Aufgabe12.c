/*
 ============================================================================
 Name        : Aufgabe12.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int max(int zahlen[], int count) {
	int maxi = zahlen[0];

	for (int i = 1; i < count; i++) {
		if (zahlen[i] > maxi) {
			maxi = zahlen[i];
		}
	}

	return maxi;
}

int min(int zahlen[], int count) {
	int mini = zahlen[0];

	for (int i = 1; i < count; i++) {
		if (zahlen[i] < mini) {
			mini = zahlen[i];
		}
	}

	return mini;
}

int main(void) {

	int w[5] = {3, 9, 1, 4, 6};

	int maxi = max(w, 5);
	int mini = min(w, 5);

	printf("Größter Wert = %2d, kleinster Wert = %2d\n", maxi, mini);

	return EXIT_SUCCESS;
}
