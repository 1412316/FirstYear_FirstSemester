#include "Bai1.h"
void NhapMang(int a[], unsigned int& n)
{
	printf("Nhap so nguyen duong n: ");
	scanf_s("%u", &n);
	while (n > SIZE)
	{
		printf("Dieu kien: n <= 100\n");
		printf("Xin nhap lai so n: \n");
		scanf_s("%u", &n);
	};
	printf("Nhap so nguyen vao day\n");
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
}

void XuatMang(int a[], unsigned int n)
{
	printf("Day vua nhap:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
		
	}
	printf("\n");
}

bool LaSoNguyenTo(int a)
{
	int count = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
			count++;
	}
	if (count == 2)
		return true;
	else
		return false;
}

void Dem_Xuat_SoNguyenTo(int a[], unsigned int n)
{
	int count = 0;
	int b[SIZE];
	for (int i = 0; i < n; i++)
	{
		if (LaSoNguyenTo(a[i]))
		{
			b[count] = a[i];
			count++;
		}
	}
	printf("Co %d so nguyen to trong mang\n", count);
	printf("Cac so nguyen to la:\n");
	for (int j = 0; j < count; j++)
	{
		printf("%d\t", b[j]);
	}
	printf("\n");
}

void TimX(int a[], unsigned int n, int& x)
{
	int flag = 0;
	printf("Nhap so nguyen x: ");
	scanf_s("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			printf("Vi tri cua x = %d trong day: a[%d]\n", x, i);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("Khong co x trong day!\n");
}

void XoaY(int a[], unsigned int &n, int& y)   // &n de --n co tac dung
{
	int vitri;
	printf("Nhap so nguyen y: ");
	scanf_s("%d", &y);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == y)
			vitri = i;
	}
	if (vitri)
	{
		for (int j = vitri; j < n - 1; j++)
		{
			a[j] = a[j + 1];
		}
		--n;
	}
}

void TimGanZ(int a[], unsigned int n, int& z)
{
	int range, vitri;
	int min = 9999;
	printf("Nhap so nguyen z: ");
	scanf_s("%d", &z);
	for (int i = 0; i < n; i++)
	{
		range = abs(a[i] - z);
		if (min > range)
		{
			min = range;
			vitri = i;
		}
	}
	printf("Vi tri xuat hien cua so a[%d] = %d gan voi z = %d nhat\n", vitri, a[vitri], z);
}