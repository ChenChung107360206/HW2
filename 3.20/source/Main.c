#include<stdio.h>
#include<stdlib.h>

int main(void) {

	float HW, R;

	while (1) {
		printf("Enter hours worked (-1 to end): ");
		scanf_s("%f", &HW);
		if (HW == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &R);

		if (HW <= 40)
			printf("Salary is $%.2f\n", HW * R);
		else {
			printf("Salary is $%.2f\n", 40 * R + (HW - 40) * R * 1.5);
		}
	}

	system("pause");
	return 0;
}