#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int einmaleins;

	printf("Einmaleins mit: ");
	scanf("%d", &einmaleins);

	if (einmaleins < 1 || einmaleins > 10) {
		printf("Ungültige Eingabe! Bitte geben Sie eine Zahl zwischen 1 und 10 ein.");
		return EXIT_FAILURE;
	}

	printf("Einmaleins mit %d: \n", einmaleins);

	int result = 0;
	for (int i = 0; i <= 10; i++) {
		result += einmaleins;
		printf("%2d mal %2d ist %3d \n", i, einmaleins, (i * einmaleins));
	}


	printf("\n\n\n"); // platz machen...


	// einmaleins in Tabellenform
	for (int j = -1; j <= 10; j++) {
		if (j > 0) {
			printf("%3d | ", j);
		} else {
			printf("      ");
		}

		for (int k = 1; k <= 10; k++) {
			if (j == -1) {
				printf(" %3d", k);
			} else if (j == 0) {
				printf("----");
			} else {
				printf (" %3d", (j * k));
			}
		}

		printf("\n");
	}


}
