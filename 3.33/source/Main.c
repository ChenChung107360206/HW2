#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int length, breadth;

	printf("Enter length and breadth: ");
	scanf_s("%d %d", &length, &breadth);

	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= breadth; j++) {
			if (i == 1 || i == length || j == 1 || j == breadth)
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}