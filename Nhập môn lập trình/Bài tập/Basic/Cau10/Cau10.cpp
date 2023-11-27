#include <stdio.h>
#include <conio.h>

void main()
{
	// a = 1.5 * b
	float P, A;
	printf("Nhap chu vi hinh chu nhat: ");
	scanf_s("%f", &P);
	A = (P / 5) * 1.5 * (P / 5);
	printf("Dien tich hinh chu nhat la: %f", A);
	_getch();
}