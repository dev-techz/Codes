#include <stdio.h>

int main()
{
	int count,hours,otime,amount;
	count = 1;
	while(count<=10)
    {
        printf("Enter Working Hours\n");
        scanf("%d",&hours);
        if(hours>=40)
        {
            otime = hours-40;
            amount = 12*otime;
            printf("Overtime Earing Is %d rs.\n",amount);
            count++;
        }
        else
        {
         printf("No Overtime Detected\n");
         count++;
        }
    }


	return 0;
}
