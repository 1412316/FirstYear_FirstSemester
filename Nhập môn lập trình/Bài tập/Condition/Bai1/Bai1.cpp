#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c, delta, x;
	double x1, x2;
	printf("Phuong trinh bac hai ax2 + bx + c = 0\n");
	printf("Nhap he so a: ");
	scanf_s("%f", &a);
	printf("Nhap he so b: ");
	scanf_s("%f", &b);
	printf("Nhap he so c: ");
	scanf_s("%f", &c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
				printf("Phuong trinh vo so nghiem");
			else
				printf("Phuong trinh vo nghiem");
		}
		else
		{
			x = -c / b;
			printf("Phuong trinh co 1 nghiem x = %f", x);
		}
	}
	else
	{
		delta = b * b - 4 * a * c;
		if (delta < 0)
		{
			printf("Phuong trinh vo nghiem");
		}
		else if (delta == 0)
		{
			x = -b / (2 * a);
			printf("Phuong trinh co nghiem kep x = %f", x);
		}
		else
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem x1 = %f, x2 = %f", x1, x2);
		}
	}
}