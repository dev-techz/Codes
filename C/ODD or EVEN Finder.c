#include <stdio.h>

int main()
{
	int no;

	printf("Enter An Integer Number\n");
    scanf("%d",&no);

    int remainder = no%2;

    if( remainder == 1 )
        printf("Number Is ODD");
    else
        printf("Number Is Even");

	return 0;
}

