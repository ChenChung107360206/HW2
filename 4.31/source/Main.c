#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int x = -1, y = -1;

	for (int i = 0; i < 9; i++) {
		if (i > 4) {
			x--; y--;
		}
		else {
			x++; y++;
		}
		for (int j = 0; j < 9; j++) {
			if (j <= 4 + x && j >= 4 - y)
				printf("*");
			else
				printf(" ");
		}	
		printf("\n");
	}

	system("pause");
	return 0;
}