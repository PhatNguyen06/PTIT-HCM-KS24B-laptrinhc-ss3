#include<stdio.h>

int main()
{
	float canh, chieu_cao;
	printf("Nhap chieu dai canh: ");
	scanf("%f", &canh);
	printf("Nhap chieu cao: ");
	scanf("%f", &chieu_cao);
	
	float dien_tich_tamgiac = 0.5 * canh * chieu_cao;
	printf("Dien tich hinh tam giac la: %.2f", dien_tich_tamgiac);
	
	return 0;
}
