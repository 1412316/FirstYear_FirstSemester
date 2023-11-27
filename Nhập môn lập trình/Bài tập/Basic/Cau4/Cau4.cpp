#include <stdio.h>
#include <conio.h>

void main()
{
	float x, A;
	printf("Nhap so thuc x: ");
	scanf_s("%f", &x);
	// Bieu thuc A = 3*x^3 - 2*x^2
	A = 3 * x * x * x - 2 * x * x;
	printf("Ket qua bieu thuc: %.2f", A);
	_getch();
}