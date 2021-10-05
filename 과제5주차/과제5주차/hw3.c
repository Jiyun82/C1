#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	printf("Please enter a number: ");
	scanf("%d", &n);

	if (n == 1) {
		printf("It is not a prime number.");
	}

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("It is not a prime number.");
			break;
		}
		else if (i == n - 1) {
			printf("It is a prime number.");
		}
	}
}