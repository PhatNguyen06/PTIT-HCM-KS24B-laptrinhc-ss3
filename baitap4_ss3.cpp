#include<stdio.h>

int main()
{
	float toan, van, anh;
	printf("Nhap diem toan: ");
	scanf("%f", &toan);
	printf("Nhap diem van: ");
	scanf("%f", &van);
	printf("Nhap diem anh: ");
	scanf("%f", &anh);
	
	float tong_diem = toan + van + anh;
	float diem_trung_binh = tong_diem / 3;
	
	printf("Tong diem 3 mon = %.2f", tong_diem);
	printf("\nDiem trung binh 3 mon = %.2f", diem_trung_binh);
	
	return 0;
}
