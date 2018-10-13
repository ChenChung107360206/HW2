#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int count = 0;
	printf("(A) \n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j <= count)
				printf("%s", "*");
			else
				printf(" ");
		}
		count += 1;
		printf("\n");
	}
	count = 9;
	printf("(B) \n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j <= count)
				printf("%s", "*");
			else
				printf(" ");
		}
		count -= 1;
		printf("\n");
	}
	count = 0;
	printf("(c) \n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j < count)
				printf(" ");
			else
				printf("%s","*");
		}
		count += 1;
		printf("\n");
	}
	count = 9;
	printf("(D) \n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j < count)
				printf(" ");
			else
				printf("%s","*");
		}
		count -= 1;
		printf("\n");
	}

	system("pause");
	return 0;
}