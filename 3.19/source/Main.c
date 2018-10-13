#include<stdio.h>
#include<stdlib.h>

int main(void) {

	float LP, IR, IC, D;

	while (1) {
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &LP);
		if (LP == -1)
			break;
		printf("Enter interest rate: ");
		scanf_s("%f", &IR);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &D);

		IC = LP * IR * D / 365;

		printf("The interest charge is %.2f\n", IC);
	}

	system("pause");
	return 0;
}