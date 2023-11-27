#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	unsigned int n;
	float x, A;
	printf("Nhap so nguyen duong n: ");
	scanf_s("%d", &n);
	printf("Nhap so thuc x: ");
	scanf_s("%f", &x);
	A = pow((pow(x, 2) + 1), n);
	printf("Ket qua bieu thuc la: %f", A);
	_getch();
}