#include <stdio.h>

int main()
{
	int year,remainder,count;
	count = 1;


	while (count<=4)
    {

	printf("Enter the Year\n");
    scanf("%d",&year);
    remainder = year%4;
    if( remainder == 1 )
        printf("Year Is Not Leap Year\n");
    else
        printf("Year Is Leap Year\n");

        count+=1;

        }

	return 0;
}

