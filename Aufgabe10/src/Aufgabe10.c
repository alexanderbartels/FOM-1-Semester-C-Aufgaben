/*
 ============================================================================
 Name        : Aufgabe10.c
 Author      : Bartels
 Version     :
 Copyright   : bartels
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int fak1(int n) {
	int fak = 1;
	for (int i = 1; i <= n; i++) {
		fak = fak * i;
	}

	return fak;
}

unsigned long long fak2(unsigned long long n) {
	if (n == 0) {
		return 1;
	}
	return n * fak2(n - 1);
}

int main(void) {
	setbuf(stdout, 0);

	printf("Fak1: %50ld\n", fak1(16));
	printf("Fak2: %50ld\n", fak2(25));
	return EXIT_SUCCESS;
}
