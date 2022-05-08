#include <stdio.h>

int main()
{
	int total_matchstick,leftmatch,input;
	printf("       Ready To Play Game.\n     *Only Pick 1-4 Matchsticks.\n     *Total Matchstick is 21.\n     *Whoever has last matchsticks lost game\n\n\n ");
    total_matchstick = 21;
    int left = 21;

	while(leftmatch>1)
    {
        printf("Enter Amount Of Matchstick To Be Take By You\n");
        scanf("%d",&input);
        if (input>=5)
        {
            printf("You Must Put Value Between 1-4\n\n");
        }
        else
        {
        leftmatch=left-input;
        printf("Left Matchstick - %d\n",leftmatch);
        if((leftmatch==20) || (leftmatch==15) || (leftmatch==10) || (leftmatch==5) )
        {
            printf("Computer Has Taken 4 Match\n");
            leftmatch = leftmatch-4;
            printf("Left Machstick - %d\n\n",leftmatch);
            left = leftmatch;
        }
         else if((leftmatch==19) || (leftmatch==14) || (leftmatch==9) || (leftmatch==4) )
        {
            printf("Computer Has Taken 3 Match\n");
            leftmatch = leftmatch-3;
            printf("Left Machstick - %d\n\n",leftmatch);
            left = leftmatch;
        }
         else if((leftmatch==18) || (leftmatch==13) || (leftmatch==8) || (leftmatch==3) )
        {
            printf("Computer Has Taken 2 Match\n");
            leftmatch = leftmatch-2;
            printf("Left Machstick - %d\n\n",leftmatch);
            left = leftmatch;
        }
        else  if((leftmatch==17) || (leftmatch==12) || (leftmatch==7) || (leftmatch==2) )
        {
            printf("Computer Has Taken 1 Match\n");
            leftmatch = leftmatch-1;
            printf("Left Machstick - %d\n\n",leftmatch);
            left = leftmatch;
        }
      }
    }

 printf("You Lost The Game");

	return 0;
}
