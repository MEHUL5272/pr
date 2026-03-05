#include<stdio.h>
int main()
{
	int bs,hra,da,ta,gs;
	
	printf("Enter the Basesalary:-");
	scanf("%d",&bs);
	
	printf("Enter the HRA Percentge:-");
	scanf("%d",&hra);
	
	printf("Enter the DA Percentge:-");
	scanf("%d",&da);
	
	printf("Enter the TA Percentge:-");
	scanf("%d",&ta);
	
	gs = bs + (bs * hra / 100) + (bs * da / 100) + (bs * ta / 100);
	
	printf("Gross salary:- RS. %d",gs); 
}
