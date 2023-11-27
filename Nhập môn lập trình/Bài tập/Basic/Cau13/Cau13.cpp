#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14

void main()
{
	float r, A;
	printf("Nhap dien tich hinh tron: ");
	scanf_s("%f", &A);
	r = sqrt(A / PI);
	printf("Ban kinh hinh tron la: %f", r);
	_getch();
}