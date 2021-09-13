#include <stdio.h>

int main(void) {
	int a, b;

	printf("두 정수를 입력하세요: ");
	scanf_s("%d %d", &a, &b);
	printf("%d & %d = %d\n", a, b, a & b);
	printf("%d | %d = %d\n", a, b, a | b);
	printf("%d ^ %d = %d", a, b, a ^ b);

	return 0;
}