#include <stdio.h>
#include <stdlib.h>

int main()
{
	int no;
	char ans='y';


	while(ans=='y' || ans =='Y')
    {
	printf("Enter An Integer Number\n");
    scanf("%d",&no);

    int remainder = no%2;

    if( remainder == 1 )
        printf("Number Is ODD\n");
    else
        printf("Number Is Even\n");


        printf("want to Re-run Programm y/n :\n");
        fflush(stdin);
        scanf("%c",&ans);
    }

	return 0;
}

