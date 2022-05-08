#include <stdio.h>
int main()
{
	float p,n,r = 0;
	printf("Input the Principle Amount,Time,Rate  \n");
	scanf("%f%f%f", &p,&n,&r);
	printf("SI For Given Data is %f.\n",p*n*r/100.0);
	return 0;
}
