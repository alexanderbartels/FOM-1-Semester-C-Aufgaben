#include <stdio.h>

int main(void) {
	const double PI = 3.1415;
	double radius = 1.00;

	printf("Bitte Radius eingeben:");
	scanf("%lf",&radius);

	printf("Der Kreis mit dem Radius %.2f\nhat den Umfang %.2f und die Fläche %.2f\n",
			radius, (2*PI*radius), (PI*(radius * radius)));

	return 0;
}
