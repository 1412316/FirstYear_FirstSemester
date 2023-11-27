#include "stdio.h"
#include "math.h"

int main(void)
{
	unsigned int n;
	float S = 0;
	printf("Nhap so nguyen duong n: ");
	scanf_s("%u", &n);
	for (int i = 2; i <= n; i++)
	{
		S = pow(S + i, 1.0 / i);
	}
	printf("S = %f", S);
}