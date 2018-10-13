#include<stdio.h>
#include<stdlib.h>

int main(void) {

	float S = 0, s;

	while (1) {
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &S);
		if (S == -1)
			break;
		s = 200 + S * 0.09;
		printf("Salary is: $%.2f\n",s);
	}

	system("pause");
	return 0;
}