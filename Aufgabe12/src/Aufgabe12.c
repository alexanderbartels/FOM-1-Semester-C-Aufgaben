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
	int max = zahlen[0];

	for (int i = 1; i < count; i++) {
		if (zahlen[i] > max) {
			max = zahlen[i];
		}
	}

	return max;
}

int min(int zahlen[], int count) {
	int min = zahlen[0];

	for (int i = 1; i < count; i++) {
		if (zahlen[i] < min) {
			min = zahlen[i];
		}
	}

	return min;
}

int main(void) {

	int w[5] = {3, 9, 1, 4, 6};

	int maxi = max(w, 5);
	int mini = min(w, 5);

	printf("Größter Wert = %2d, kleinster Wert = %2d\n", maxi, mini);

	return EXIT_SUCCESS;
}
