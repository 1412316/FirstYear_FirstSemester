#include <stdio.h>
#include <conio.h>

void main()
{
	float a, P, A;
	printf("Nhap canh hinh vuong: ");
	scanf_s("%f", &a);
	P = a * 4;
	A = a * a;
	printf("Chu vi hinh vuong la: %f\n", P);
	printf("Dien tich hinh vuong la: %f", A);
	_getch();
}