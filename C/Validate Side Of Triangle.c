#include <stdio.h>

int main()
{

	int a,b,c;
    printf("Enter Sides Of Triangle By Spaceing\n");
    scanf("%d%d%d",&a,&b,&c);
    if( (a+b>c) && (b+c>a) && (c+a>b) )
        printf("Triangle is valid");
    else
        printf("Triangle is Not Valid");


	return 0;
}
