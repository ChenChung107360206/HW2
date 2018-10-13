#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int AN=0;
	float BB, TC, Tc, cL, NB;

	while (AN != EOF) {

		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &AN);
		if (AN == -1)
			break;
		printf("Enter beginning balance: ");
		scanf_s("%f", &BB);
		printf("Enter total charges: ");
		scanf_s("%f", &TC);
		printf("Enter total credits: ");
		scanf_s("%f", &Tc);
		printf("Enter credit limit: ");
		scanf_s("%f", &cL);

		NB = BB + TC - Tc;
		if (NB >= cL) {
			printf("Account:\t%d\n", AN);
			printf("Credit limit:\t%.2f\n", cL);
			printf("Balance:\t%.2f\n", NB);
			printf("Credit Limit Exceeded\n");
		}
		else {
			printf("Account:\t%d\n", AN);
			printf("Credit limit:\t%.2f\n", cL);
			printf("Balance:\t%.2f\n", NB);
			printf("Credit Limit Failed\n");
		}

	}

	system("pause");
	return 0;
}