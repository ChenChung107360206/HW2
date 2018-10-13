#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int code,hours,amount;
	float salary;

	printf("Enter employee's paycode: ");
	scanf_s("%d", &code);

	switch (code) {
	case 1:
		printf("Enter your salary: ");
		scanf_s("%f", &salary);
		printf("Salary is %.2f\n", salary);
		break;
	case 2:
		printf("Enter your working hours: ");
		scanf_s("%d", &hours);
		printf("Enter your salary: ");
		scanf_s("%f", &salary);
		if (hours <= 40)
			salary = hours * salary;
		else
			salary = 400 + (hours - 40)*1.5 * salary;
		printf("Salary is %.2f\n",salary);
		break;
	case 3:
		printf("Enter your gross weekly sales: ");
		scanf_s("%f", &salary);
		salary = 250 + salary * 0.057;
		printf("Salary is %.2f\n", salary);
		break;
	case 4:
		printf("Enter the numbers of the item you produce: ");
		scanf_s("%d", &amount);
		printf("Enter how many you can earn per item: ");
		scanf_s("%f", &salary);
		printf("Salary is %.2f\n", amount*salary);
		break;
	}

	system("pause");
	return 0;
}