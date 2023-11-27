#include "stdio.h"
#include "math.h"

int main(void)
{
	unsigned int n;
	float S = 0;
	printf("Nhap so nguyen duong n: ");
	scanf_s("%u", &n);
	for (int i = 1; i <= n; i++)
	{
		S = sqrt(2 * i + S);
	}
	printf("S = %f", S);
}