#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14

void main()
{
	float a, r, A;
	printf("Nhap canh tam giac deu: ");
	scanf_s("%f", &a);
	printf("Nhap ban kinh hinh tron: ");
	scanf_s("%f", &r);
	//A = (2 * r * PI) / 6 * r / 2 * 3 + 3 * sqrt(3) / 4 * pow(a, 2);
	A =  r * PI * r / 2 + 3 * sqrt(3) / 4 * pow(a, 2);
	printf("Dien tich hinh to xam la: %f", A);
	_getch();
}