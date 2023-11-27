#include <stdio.h>

int main(void)
{
	unsigned int ngay, thang, ngayTruoc, ngaySau, thangTruoc, thangSau;
	bool hople = false;
	char choice;
	printf("Nhap ngay: ");
	scanf_s("%u", &ngay);
	printf("Nhap thang: ");
	scanf_s("%u", &thang);
	printf("Chon a, b, c, d, e, f\n");
	printf("a. Kiem tra tinh hop le cua du lieu nhap vao.\n");
	printf("b. Cho biet day la ngay thu bao nhieu trong nam.\n");
	printf("c. Cho biet day la ngay thu may trong tuan.\n");
	printf("d. Cho biet ngay hom sau cua ngay da nhap vao la ngay nao.\n");
	printf("e. Cho biet ngay hom truoc cua ngay da nhap vao la ngay nao.\n");
	printf("f. Cho biet nam nhap vao co phai la nam nhuan hay khong.\n\n");

	// a. Kiem tra tinh hop le cua du lieu nhap vao.
	if (ngay > 31)
	{
		printf("a. Ngay khong hop le!");;
	}
	else if ((ngay == 31) && ((thang == 2) || (thang == 4) || (thang == 6) || (thang == 9) || (thang == 11)))
		printf("a. Thang khong hop le!");
	else if ((ngay == 30) && ((thang == 2)))
		printf("a. Thang khong hop le!");
	else
	{
		printf("a. Ngay thang hop le!\n");
		hople = true;
	}
	if (hople) 
	{
		// b. Cho biet day la ngay thu bao nhieu trong nam.
		
		// c. Cho biet day la ngay thu may trong tuan.
		
		// d. Cho biet ngay hom sau cua ngay da nhap vao la ngay nao.
		if ((ngay == 28) && (thang == 2))
		{
			ngaySau = 1;
			thangSau = 3;
		}
		else if ((ngay == 30) && ((thang == 4) || (thang == 6) || (thang == 9) || (thang == 11)))
		{
			ngaySau = 1;
			thangSau = thang + 1;
		}
		else if ((ngay == 31) && ((thang == 1) || (thang == 3) || (thang == 5) || (thang == 7) || (thang == 8) || (thang == 10) || (thang == 12)))
		{
			ngaySau = 1;
			thangSau = thang + 1;
		}
		else
		{
			ngaySau = ngay + 1;
			thangSau = thang;
		}
		printf("d. Ngay sau ngay %u/%u la: %u/%u\n", ngay, thang, ngaySau, thangSau);

		// e. Cho biet ngay hom truoc cua ngay da nhap vao la ngay nao.
		if (ngay == 1)
		{
			if ((thang == 1) || (thang == 2) || (thang == 4) || (thang == 6) || (thang == 8) || (thang == 9) || (thang == 11))
			{
				ngayTruoc = 31;
				if (thang == 1)
					thangTruoc = 12;
				else
					thangTruoc = thang - 1;
			}
			else if ((thang == 5) || (thang == 7) || (thang == 10) || (thang == 12))
			{
				ngayTruoc = 30;
				thangTruoc = thang - 1;
			}
		}
		else
		{
			ngayTruoc = ngay - 1;
			thangTruoc = thang;
		}
		printf("e. Ngay truoc ngay %u/%u la: %u/%u", ngay, thang, ngayTruoc, thangTruoc);

		// f. Cho biet nam nhap vao co phai la nam nhuan hay khong.

	}
}