#include <stdio.h>

int main()
{
	int year;

	printf("Enter the Year\n");
    scanf("%d",&year);
    int q = year/4;

    if (q*4==year)
        printf("Year Is Leap Year.");
    else
        printf("year is not Leap Year");


	return 0;
}

