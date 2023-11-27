#include <stdio.h>
#include <conio.h>

void main()
{
	unsigned int a, b;
	printf("Nhap so nguyen duong a: ");
	scanf_s("%d", &a);
	printf("Nhap so nguyen duong b: ");
	scanf_s("%d", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Gia tri cua a sau hoan doi: %d\n", a);
	printf("Gia tri cua b sau hoan doi: %d", b);
	_getch();
}