#include <stdio.h>
// Ve hinh rowxcol
int main() {

	int row, col;

	while(1) {
	printf("%s", "Nhap so hang: ");
	scanf("%d", &row);
	printf("%s", "Nhap so cot: ");
	scanf("%d", &col);
	int i, j;
		for (i = 1; i <= row; i++) {
			for (j = 1; j <= col; j++) {
				printf("%d  ", j);
			}
			puts("");
	}
	}
	return 0;
}