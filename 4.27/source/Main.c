#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int a, b, c;

	for (c = 5; c <= 500; c++) {
		for (a = 3; a < c; a++) {
			for (b = 4; b < c; b++) {
				if (c*c == a * a + b * b) {
					printf("%3d %3d %3d\n", a, b, c);
					printf("%3d %3d %3d\n", b, a, c);
					a = c;
					b = c;
				}
			}
		}
	}

	system("pause");
	return 0;
}