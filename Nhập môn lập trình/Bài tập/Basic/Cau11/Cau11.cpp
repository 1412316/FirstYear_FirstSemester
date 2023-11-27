#include <stdio.h>
#include <conio.h>
#define PI 3.14

void main()
{
	float a, b, c, d, r, h, A1, A2, A3, V1, V2, V3;

	// a. Khoi hop
	printf("Nhap chieu dai khoi hop: ");
	scanf_s("%f", &a);
	printf("Nhap chieu rong khoi hop: ");
	scanf_s("%f", &b);
	printf("Nhap chieu sau khoi hop: ");
	scanf_s("%f", &c);
	A1 = 2 * (a * b + a * c + b * c);
	V1 = a * b * c;
	printf("Dien tich be mat khoi hop la: %f\n", A1);
	printf("The tich khoi hop la: %f\n", V1);

	// b. Khoi lap phuong
	printf("Nhap canh khoi lap phuong: ");
	scanf_s("%f", &d);
	A2 = 6 * d * d;
	V2 = d * d * d;
	printf("Dien tich be mat khoi lap phuong la: %f\n", A2);
	printf("The tich khoi lap phuong la: %f\n", V2);

	// c. Khoi tru
	printf("Nhap ban kinh khoi tru: ");
	scanf_s("%f", &r);
	printf("Nhap chieu cao khoi tru: ");
	scanf_s("%f", &h);
	A3 = 2 * PI * r * (r + h);
	V3 = PI * r * r * h;
	printf("Dien tich be mat khoi tru la: %f\n", A3);
	printf("The tich khoi tru la: %f", V3);
	_getch();
}