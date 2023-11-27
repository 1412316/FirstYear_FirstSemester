#include "stdio.h"
#include "math.h"

int main(void)
{
	unsigned int n, S2;
	float S1 = 0;
	printf("Nhap so nguyen duong n: ");
	scanf_s("%u", &n);
	for (int i = 1; i <= n; i++)
	{
		S2 = 1;
		for (int j = 1; j <= i; j++)
		{
			S2 = S2 * j;
		}
		S1 = pow(S1 + S2, 1.0 / (i + 1));
	}
	printf("S = %f", S1);
}