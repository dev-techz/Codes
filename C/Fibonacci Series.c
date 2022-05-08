#include <stdio.h>

int main()
{
   int i,x = 0,y = 1,no;
   printf("Input A Number For Fibonacci Index\n");
   scanf("%d",&i);
	if(i==0)
    {
        printf("Fibonacci Index 0 Value is 0");
    }
    else
         {
        for (int count = 1; count < i+1; count++)
    {
            y = y+x;
            x = y-x;
            no = count;
    }  
     printf("Fibonacci Index %d Value is %d\n",no,x);
    
        }
    return 0;
}
