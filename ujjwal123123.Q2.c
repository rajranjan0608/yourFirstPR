#include <stdio.h>

int main() {
	int n;
	printf("Enter a number: ");
	scanf(" %d", &n);

	if (n % 2 == 0) printf("the number is even\n");
	else printf("the number is odd\n");
}

