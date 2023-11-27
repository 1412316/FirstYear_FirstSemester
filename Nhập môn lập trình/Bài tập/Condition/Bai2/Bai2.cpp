#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned int a, b, c;
	printf("Nhap so a: ");
	scanf_s("%u", &a);
	printf("Nhap so b: ");
	scanf_s("%u", &b);
	printf("Nhap so c: ");
	scanf_s("%u", &c);
	if ((a < b) && (b < c))
	{
		printf("Cac so theo thu tu tang dan la: %u %u %u", a, b, c);
	}
	else if ((a < c) && (c < b))
	{
		printf("Cac so theo thu tu tang dan la: %u %u %u", a, c, b);
	}
	else if ((b < a) && (a < c))
	{
		printf("Cac so theo thu tu tang dan la: %u %u %u", b, a, c);
	}
	else if ((b < c) && (c < a))
	{
		printf("Cac so theo thu tu tang dan la: %u %u %u", b, c, a);
	}
	else if ((c < a) && (a < b))
	{
		printf("Cac so theo thu tu tang dan la: %u %u %u", c, a, b);
	}
	else
	{
		printf("Cac so theo thu tu tang dan la: %u %u %u", c, b, a);
	}
	return 0;
}