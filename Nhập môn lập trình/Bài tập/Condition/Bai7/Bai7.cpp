#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned int r1, r2, d;
	printf("Nhap ban kinh hinh tron 1: r1 = ");
	scanf_s("%u", &r1);
	printf("Nhap ban kinh hinh tron 2: r2 = ");
	scanf_s("%u", &r2);
	printf("Nhap khoang cach giua tam hai duong tron: d = ");
	scanf_s("%u", &d);
	if (d > r1 + r2)
		printf("Hai hinh tron tach roi nhau");
	else if (d == r1 + r2)
		printf("Hai hinh tron tiep xuc ngoai nhau");
	else if ((d < r1 + r2) && (d > abs(r1 - r2)))
		printf("Hai hinh tron giao nhau");
	else if (d == abs(r1 - r2))
		printf("Hai hinh tron tiep xuc trong nhau");
	else if (d < abs(r1 - r2))
		printf("Hai hinh tron bao nhau hay chong khop len nhau");
}