#include "stdio.h"

int main(void)
{
	unsigned int S, n;
	S = 0, n = 1;
	while (S <= 1000)
	{
		S += n;
		n++;
		/*printf("S: %u\t", S);
		printf("n: %u\n", n);*/
	} 
	printf("n la %u", n - 1);
}