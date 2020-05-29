#include <stdio.h>

int main() {
	int max = 0;

	int i, j = 0;
	for (i = 0; i < 3; i++) {
		printf("Enter a number: ");
		scanf(" %d", &j);
	
		if (j > max) max = j;
	}

	printf("The greatest number is %d\n", max);
}
