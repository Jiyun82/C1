#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[5];

	printf("5���� ������ �Է��ϼ���: ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Ȧ�� ���: ");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 1) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n¦�� ���: ");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
}