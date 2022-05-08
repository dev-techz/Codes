#include <stdio.h>

int main()
{
	int input,positive=0,negative=0,zero=0;
    printf("Enter 255 to stop..\n");

    while(input<255 || input>255)
    {
        printf("Enter You Number\n");
        scanf("%d",&input);
        if(input<0)
        {
            negative++;
        }
        else if(input>0)
        {
            positive++;
        }
        else if(input==0)
        {
            zero++;
        }
    }

    positive--;
    printf("You Entered total %d +ve No.\nYou Entered total %d -ve No.\nYou Entered total %d zero No.\n",positive,negative,zero);
	return 0;    
}
