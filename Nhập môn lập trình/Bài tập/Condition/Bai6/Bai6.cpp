#include <stdio.h>

int main(void)
{
	float a, b, c;
	int deu, vuong, can;
	printf("Nhap doan thang a: ");
	scanf_s("%f", &a);
	printf("Nhap doan thang b: ");
	scanf_s("%f", &b);
	printf("Nhap doan thang c: ");
	scanf_s("%f", &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		printf("La ba canh mot tam giac ");
		deu = (a == b) && (b == c);
		vuong = (a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a);
		can = (a == b) || (a == c) || (b == c);

		if (deu)
			printf("deu\n");
		else if (vuong && can)
			printf("vuong can\n");
		else if (vuong) 
			printf("vuong\n");
		else if (can) 
			printf("can\n");
		else 
			printf("thuong\n");
	}
	else 
		printf("Khong phai la ba canh mot tam giac\n");
}