#include <stdio.h>

int main()
{
	int year;

	printf("Enter the Year\n");
    scanf("%d",&year);
    int remainder = year%4;

    if( remainder == 1 )
        printf("Year Is Not Leap Year");
    else
        printf("Year Is Leap Year");

	return 0;
}

