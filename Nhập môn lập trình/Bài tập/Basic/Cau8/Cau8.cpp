#include <stdio.h>
#include <conio.h>

void main()
{
	unsigned int a, b, c;
	printf("Nhap so nguyen duong a: ");
	scanf_s("%d", &a);
	printf("Nhap so nguyen duong b: ");
	scanf_s("%d", &b);
	printf("Nhap so nguyen duong c: ");
	scanf_s("%d", &c);
	a = a + b + c;
	b = a - (b + c);
	c = a - (b + c);
	a = a - (b + c);
	printf("Hoan doi a => c, b => a, c => b\n");
	printf("Gia tri cua a sau hoan doi: %d\n", a);
	printf("Gia tri cua b sau hoan doi: %d\n", b);
	printf("Gia tri cua c sau hoan doi: %d", c);
	_getch();
}