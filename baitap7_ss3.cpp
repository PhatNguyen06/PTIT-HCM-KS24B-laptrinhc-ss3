#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	if(n <= 999 || n >= 10000)
	{
		printf("Yeu cau nhap n co 4 chu so. Nhap lai: ");
		scanf("%d", &n);
	}
	
	int sum = 0;
	sum += n % 10;
	n = n / 10;
	sum += n % 10;
	n = n / 10;
	sum += n % 10;
	n = n / 10;
	sum += n % 10;
	n = n / 10;
	
	printf("Tong chu so da nhap la: %d", sum);
	
	
	return 0;
}
