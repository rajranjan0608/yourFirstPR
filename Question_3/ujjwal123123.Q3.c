#include <stdio.h>

int main() {
	int n;
	printf("Enter an integer: ");
	scanf(" %d", &n);

	int i;
	for (i = 2; i <= n/2; i++)
		if (n % i == 0) {
			printf("The number is not prime\n");
			return 0;
		}

	printf("The number is prime\n");
}
