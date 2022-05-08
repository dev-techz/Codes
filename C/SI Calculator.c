//Creating SI Calculator

#include <stdio.h>

int main(void)
{
	int p,n = 0; // p = principle , n = no. of year
	double si,r = 0; // si = simple intrest , r = rate of intrest

	printf("Input the Principle Amount.\n");
	scanf("%d", &p);
	printf("Input the Time Period In Years.\n");
	scanf("%d", &n);
	printf("Input the Rate Of Interest.\n");
	scanf("%f", &r);
	si = p*n*r/100; // Formula Of SI
	printf("SI For Given Data is %d.\n",si);
	
	return 0;
} 