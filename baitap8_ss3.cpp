#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	while(n <= 999 || n >= 10000)
	{
		printf("Yeu cau nhap n co 4 chu so. Nhap lai: ");
		scanf("%d", &n);
	}
	
	int so_nghich_dao = 0;
	for(int i = 0; i < 4; i++)
	{
		so_nghich_dao = so_nghich_dao * 10 + (n % 10);
		n = n / 10;
	}
	
	printf("So sau khi duoc nghich dao = %d", so_nghich_dao);
	
	return 0;
}
