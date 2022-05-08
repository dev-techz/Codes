#include <stdio.h>

int main()
{
	int a,b,c,d,e,no;

	printf("Enter Your Five Digit No.\n");

	scanf("%d",&no);
	e = (no%10);
	d = (no%100)/10;
	c = (no%1000)/100;
	b = (no%10000)/1000;
	a = (no%100000)/10000;

    printf("Reverse Of Digits is %d%d%d%d%d",e,d,c,b,a);

	return 0;
}
