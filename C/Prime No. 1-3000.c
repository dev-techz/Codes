#include <stdio.h>

int main()
{
    int num,i;
    printf("1, 2, ");
    for(num=3;num<=3000;num++)
    {
       for(i=2;i<num-1;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num-1)
            {
                printf("%d ,",num);
            }
    }
return 0;
}
