#include <stdio.h>

int main()
{
	int num,count,x,y;

	printf("Enter Number For Factorial Value Of it.\n");
	scanf("%d",&num);
	count=num;

	while (count>=2)
    {

    y=num;
    x = y*(count-1);
    num = x;

    count=count-1;

    }

    printf("Factorial Of No. is %d .",num);


	return 0;
}
