#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()

{
	unsigned int n;
	float M, q, A, B;
	printf("Nhap so tien gui M: ");
	scanf_s("%f", &M);
	printf("Nhap so thang gui n: ");
	scanf_s("%d", &n);
	printf("Nhap lai suat q: ");
	scanf_s("%f", &q);
	B = M * (pow((1 + q), n));
	A = B - M;
	printf("Tong so tien lai la: %f", A);
	// So thuc trong C nhan(multi) ra sai qua???
	_getch();
}