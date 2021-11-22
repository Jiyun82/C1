#include <stdio.h>

int convCase(int ch) {
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z') {
		return ch + diff;
	}
	else if (ch >= 'a' && ch <= 'z') {
		return ch - diff;
	}
	else
		return ch;
}


int main() {
	int str[30];
	int changed;

	printf("Input> ");

	int i = 0;
	int first = 1;

	while (1) {
		str[i] = getchar();
		if (first) {
			printf("Output> ");
			first = 0;
		}
		if (str[i] == EOF)
			break;
		changed = convCase(str[i]);
		putchar(changed);
	}
}