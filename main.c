#include <stdio.h>

int main() {
	int a, b, c, e;
	printf("Hello, Welcome!!\n\n");
	printf("1 Addition\n");
	printf("2 Subtraction\n");
	printf("3 Multiplication\n");
	printf("4 Division\n");
	printf("5 Exit\n");
	printf("Select: ");
	scanf("%d", &a);
	//足し算
	if (a == 1) {
		printf("First: ");
		scanf("%d", &a);
		printf("Second: ");
		scanf("%d", &b);
		printf("\nAnswer: %d\n", a + b);
		printf("Exit (enter 1)");
		scanf("%d", &e);
		return 0;
	}
	//引き算
	else if (a == 2) {
		printf("First: ");
		scanf("%d", &a);
		printf("Second: ");
		scanf("%d", &b);
		printf("\nAnswer: %d\n", a - b);
		printf("Exit (enter 1)");
		scanf("%d", &e);
		return 0;
	}
	//掛け算
	else if (a == 3) {
		printf("First: ");
		scanf("%d", &a);
		printf("Second: ");
		scanf("%d", &b);
		printf("\nAnswer: %d\n", a * b);
		printf("Exit (enter 1)");
		scanf("%d", &e);
		return 0;
	}
	//割り算
	else if (a == 4) {
		printf("First: ");
		scanf("%d", &a);
		printf("Second: ");
		scanf("%d", &b);
		printf("\nAnswer: %d mod %d\n", a / b, a % b);
		printf("Exit (enter 1)");
		scanf("%d", &e);
		return 0;
	}
	else {
		printf("Error!");
		printf("Exit (enter 1)");
		scanf("%d", &e);
		return 0;
	}
}
