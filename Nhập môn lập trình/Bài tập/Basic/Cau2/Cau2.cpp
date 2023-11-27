#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, sum;
	printf("Nhap so nguyen thu nhat: ");
	scanf_s("%d", &a);
	printf("Nhap so nguyen thu hai: ");
	scanf_s("%d", &b);
	sum = a + b;
	printf("Tong cua 2 so nguyen la: %d", sum);
	_getch();
}