#include <stdio.h>
#include <conio.h>

void main()
{
	float a, b, P, A;
	printf("Nhap chieu dai hinh chu nhat: ");
	scanf_s("%f", &a);
	printf("Nhap chieu rong hinh chu nhat: ");
	scanf_s("%f", &b);
	P = (a + b) * 2;
	A = a * b;
	printf("Chu vi hinh chu nhat la: %f\n", P);
	printf("Dien tich hinh chu nhat la: %f", A);
	_getch();
}