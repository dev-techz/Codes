#include <stdio.h>
#include <stdlib.h>

int main()
{
int input,num,count,x,y,i,no,remainder;
    for(;;)
    {
        printf("Enter Number to Start Programs\n1.Factorial of Number.\n2.Prime Or Not.\n3.Odd Or Even.\n4.Exit.\n->");
        input=0;
        scanf("%d",&input);
        switch(input)
        {
            
        case 1:

    x=0;
    y=0;
	printf("Enter Number For Factorial Value Of it.\n->");
	scanf("%d",&num);
	count=num;
	while (count>=2)
    {
    y=num;
    x = y*(count-1);
    num = x;
    count=count-1;
    }
    printf("Factorial Of No. is %d .\n",num);
    break;

        case 2:

    printf("Enter No. to Know No. is Prime or Not.\n");
    scanf("%d",&num);
    for(i=2;i<num-1;i++)
        {
            if(num%i==0)
            {
                printf("%d is Not Prime.\n",num);
                break;
            }
        }
        if(i==num-1)
            {
                printf("%d is Prime No.\n",num);
                break;
            }
            break;

        case 3:

    no=0;

	printf("Enter An Integer Number\n");
    scanf("%d",&no);

    remainder = no%2;

    if( remainder == 1 )
        printf("Number Is ODD\n");
    else
        printf("Number Is Even\n");
    break;

        case 4:

            exit(1);
        }
    }
	return 0;
}
