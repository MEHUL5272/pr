#include<stdio.h>
int main()
{
	float c,f;
	
	printf("Enter the celsius temperature:- ");
	scanf("%f",&c);
	
	f = (9.0/5.0 * c) + 32;
	
	printf("temperature fahrenheit: %f",f);
	
	return 0;
}
