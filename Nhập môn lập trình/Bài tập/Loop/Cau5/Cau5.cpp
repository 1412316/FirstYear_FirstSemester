#include "stdio.h"
#include "math.h"

int main(void)
{
	unsigned int n, S1;  // S1: mau so theo giai thua
	float S = 0;
	printf("Nhap so nguyen duong n: ");
	scanf_s("%u", &n);
	for (int i = 0; i <= n; i++)
	{
		S1 = 1;
		if (i != 0)
		{
			for (int j = 1; j <= i; j++)
			{
				S1 *= j;
			}
		}	
		S += 1.0 / S1;   // ep kieu float bang 1.0
		printf("S: %f\n", S);
	}
	printf("S = %f", S);
}