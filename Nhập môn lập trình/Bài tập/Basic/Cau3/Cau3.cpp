#include <stdio.h>
#include <conio.h>

void main()
{
	char c;
	printf("Nhap 1 ky tu: ");
	scanf_s("%c", &c);
	printf("Ma ASCII cua ky tu %c: %d", c, c);
	_getch();
}