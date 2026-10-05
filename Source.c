#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int A, B, C;
	printf("Введите три параметра кислотности (A, B, C): ");
	scanf_s("%d %d %d", &A, &B, &C);
	if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) {
		printf("Лунка идеальна.\n");
	}
	else {
		printf("Лунка не подходит, параметры не кратны трем.\n");
	}
	return 0;
}