#include<stdio.h>

int main()
{
	int celsius;
	printf("C = ");
	scanf("%d", &celsius);
	
	float fahrenheit = celsius * (9.0/5.0) + 32;
	
	printf("F = %.2f", fahrenheit);
	
	
	return 0;
}
