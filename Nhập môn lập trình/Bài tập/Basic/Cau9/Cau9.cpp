#include <stdio.h>
#include <conio.h>
#define PI 3.14

void main()
{
	float r, P, A;
	printf("Nhap ban kinh hinh tron: ");
	scanf_s("%f", &r);
	P = 2 * r * PI;
	A = r * r * PI;
	printf("Chu vi hinh tron la: %f\n", P);
	printf("Dien tich hinh tron la: %f", A);
	_getch();
}