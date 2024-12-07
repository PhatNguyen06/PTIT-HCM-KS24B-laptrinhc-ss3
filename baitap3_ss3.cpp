#include<stdio.h>
#include<math.h>

int main()
{
	float pi = 3.14;
	float ban_kinh;
	printf("Nhap ban kinh: ");
	scanf("%f", &ban_kinh);
	
	float dien_tich = pow(ban_kinh, 2) * pi;
	printf("Dien tich hinh tron = %.2f", dien_tich);
	float chu_vi = 2 * ban_kinh * pi;
	printf("\nChu vi hinh tron = %.2f", chu_vi);
	
	return 0;
}
