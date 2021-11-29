#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct city {
	char name[30];
	char country[30];
	char population[30];
}City;

void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

int main() {
	City cityarr[3];

	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("Name> ");
		fgets(cityarr[i].name, sizeof(cityarr[i].name), stdin);
		RemoveBSN(cityarr[i].name);
		printf("Country> ");
		fgets(cityarr[i].country, sizeof(cityarr[i].country), stdin);
		RemoveBSN(cityarr[i].country);
		printf("Population> ");
		fgets(cityarr[i].population, sizeof(cityarr[i].population), stdin);
		RemoveBSN(cityarr[i].population);
	}

	printf("Printing the three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %s people\n", i+1, cityarr[i].name, cityarr[i].country, cityarr[i].population);
	}
}