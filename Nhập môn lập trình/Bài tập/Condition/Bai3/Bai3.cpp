#include <stdio.h>

int main(void)
{
	unsigned int a, b, c, d;
	char choice;
	printf("Nhap so a: ");
	scanf_s("%u", &a);
	printf("Nhap so b: ");
	scanf_s("%u", &b);
	printf("Nhap so c: ");
	scanf_s("%u", &c);
	printf("Nhap so d: ");
	scanf_s("%u", &d);
	printf("Chon a hoac b\n");
	printf("a. In ra so lon nhat, so nho nhat\n");
	printf("b. In ra so khong phai lon nhat va nho nhat\n");
	printf("Nhap lua chon: ");
	scanf_s(" %c", &choice);   // Viet vay de cho phep bo qua ky tu khoang trong
	switch (choice)
	{
		case 'a':
		{
			//// max
			//if (a > b)
			//{
			//	if (a > c)
			//	{
			//		if (a > d)
			//			printf("So lon nhat la: %u\n", a);
			//		else
			//			printf("So lon nhat la: %u\n", d);
			//	}
			//	else // a < c
			//	{
			//		if (c > d)
			//			printf("So lon nhat la: %u\n", c);
			//		else
			//			printf("So lon nhat la: %u\n", d);
			//	}
			//}
			//else // a < b
			//{
			//	if (b > c)
			//	{
			//		if (b > d)
			//			printf("So lon nhat la: %u\n", b);
			//		else
			//			printf("So lon nhat la: %u\n", d);
			//	}
			//	else // b < c
			//	{
			//		if (c > d)
			//			printf("So lon nhat la: %u\n", c);
			//		else
			//			printf("So lon nhat la: %u\n", d);
			//	}
			//}

			//// min
			//if (a < b)
			//{
			//	if (a < c)
			//	{
			//		if (a < d)
			//			printf("So nho nhat la: %u", a);
			//		else
			//			printf("So nho nhat la: %u", d);
			//	}
			//	else // a > c
			//	{
			//		if (c < d)
			//			printf("So nho nhat la: %u", c);
			//		else
			//			printf("So nho nhat la: %u", d);
			//	}
			//}
			//else // a > b
			//{
			//	if (b < c)
			//	{
			//		if (b < d)
			//			printf("So nho nhat la: %u", b);
			//		else
			//			printf("So nho nhat la: %u", d);
			//	}
			//	else // b > c
			//	{
			//		if (c < d)
			//			printf("So nho nhat la: %u", c);
			//		else
			//			printf("So nho nhat la: %u", d);
			//	}
			//}
			if (((a > b) && (b > c) && (c > d)) || ((a > b) && (c > b) && (b > d)))
			{
				printf("So lon nhat la: %u\n", a);
				printf("So nho nhat la: %u", d);
			}
			else if (((a > b) && (b > d) && (d > c)) || ((a > d) && (d > b) && (b > c)))
			{
				printf("So lon nhat la: %u\n", a);
				printf("So nho nhat la: %u", c);
			}
			else if (((a > c) && (c > d) && (d > b)) || ((a > d) && (d > c) && (c > b)))
			{
				printf("So lon nhat la: %u\n", a);
				printf("So nho nhat la: %u", b);
			}
			else if (((b > c) && (c > d) && (d > a)) || ((b > d) && (d > c) && (c > a)))
			{
				printf("So lon nhat la: %u\n", b);
				printf("So nho nhat la: %u", a);
			}
			else if (((b > a) && (a > d) && (d > c)) || ((b > d) && (d > a) && (a > c)))
			{
				printf("So lon nhat la: %u\n", b);
				printf("So nho nhat la: %u", c);
			}
			else if (((b > c) && (c > a) && (a > d)) || ((b > a) && (a > c) && (c > d)))
			{
				printf("So lon nhat la: %u\n", b);
				printf("So nho nhat la: %u", d);
			}
			else if (((c > b) && (b > d) && (d > a)) || ((c > d) && (d > b) && (b > a)))
			{
				printf("So lon nhat la: %u\n", c);
				printf("So nho nhat la: %u", a);
			}
			else if (((c > a) && (a > d) && (d > b)) || ((c > d) && (d > a) && (a > b)))
			{
				printf("So lon nhat la: %u\n", c);
				printf("So nho nhat la: %u", b);
			}
			else if (((c > b) && (b > a) && (a > d)) || ((c > a) && (a > b) && (b > d)))
			{
				printf("So lon nhat la: %u\n", c);
				printf("So nho nhat la: %u", d);
			}
			else if (((d > b) && (b > c) && (c > a)) || ((d > c) && (c > b) && (b > a)))
			{
				printf("So lon nhat la: %u\n", d);
				printf("So nho nhat la: %u", a);
			}
			else if (((d > a) && (a > c) && (c > b)) || ((d > c) && (c > a) && (a > b)))
			{
				printf("So lon nhat la: %u\n", d);
				printf("So nho nhat la: %u", b);
			}
			else if (((d > b) && (b > a) && (a > c)) || ((d > a) && (a > b) && (b > c)))
			{
				printf("So lon nhat la: %u\n", d);
				printf("So nho nhat la: %u", c);
			}
			break;
		}
		case 'b':
		{
			if (((a > b) && (b > c) && (c > d)) || ((a > b) && (c > b) && (b > d)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", b, c);
			}
			else if (((a > b) && (b > d) && (d > c)) || ((a > d) && (d > b) && (b > c)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", b, d);
			}
			else if (((a > c) && (c > d) && (d > b)) || ((a > d) && (d > c) && (c > b)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", c, d);
			}
			else if (((b > c) && (c > d) && (d > a)) || ((b > d) && (d > c) && (c > a)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", c, d);
			}
			else if (((b > a) && (a > d) && (d > c)) || ((b > d) && (d > a) && (a > c)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", a, d);
			}
			else if (((b > c) && (c > a) && (a > d)) || ((b > a) && (a > c) && (c > d)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", a, c);
			}
			else if (((c > b) && (b > d) && (d > a)) || ((c > d) && (d > b) && (b > a)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", b, d);
			}
			else if (((c > a) && (a > d) && (d > b)) || ((c > d) && (d > a) && (a > b)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", a, d);
			}
			else if (((c > b) && (b > a) && (a > d)) || ((c > a) && (a > b) && (b > d)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", a, b);
			}
			else if (((d > b) && (b > c) && (c > a)) || ((d > c) && (c > b) && (b > a)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", b, c);;
			}
			else if (((d > a) && (a > c) && (c > b)) || ((d > c) && (c > a) && (a > b)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", a, c);
			}
			else if (((d > b) && (b > a) && (a > c)) || ((d > a) && (a > b) && (b > c)))
			{
				printf("Hai so khong lon nhat, nho nhat la: %u %u", a, b);
			}
			break;
		}
		default:
			printf("Nhap sai lua chon\n");
			printf("Ket thuc chuong trinh!");
			break;
	}
}