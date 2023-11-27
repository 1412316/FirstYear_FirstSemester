#include "Bai1.h"

int main(void) {
	unsigned int m, n = 0;
	int a[SIZE], x, y, z, choice = 0;

	printf("Lua chon\n");
	printf("1: a. Nhap N so nguyen vao day a[n].\n");
	printf("2: b. Xuat day vua nhap ra man hinh.\n");
	printf("3: c. Dem xem day vua nhap co bao nhieu so nguyen to, in cac so nguyen to do ra man hinh.\n");
	printf("4: d. Nhap so nguyen X, tim vi tri xuat hien cua X tren day vua nhap.\n");
	printf("5: e. Nhap so nguyen Y, xoa mot so co gia tri Y ra khoi day vua nhap.\n");
	printf("6: f. Nhap so nguyen Z, tim vi tri xuat hien cua so tren day co gia tri gan voi Z nhat.\n");
	printf("7: Thoat.\n\n");
	while (choice != 7) {
		printf("Nhap lua chon: ");
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			NhapMang(a, n);
			break;
		case 2:
			XuatMang(a, n);
			break;
		case 3:
			Dem_Xuat_SoNguyenTo(a, n);
			break;
		case 4:
			TimX(a, n, x);
			break;
		case 5:
			XoaY(a, n, y);
			XuatMang(a, n);
			break;
		case 6:
			TimGanZ(a, n, z);
			break;
		case 7:
			break;
		}
	}
}