#include <stdio.h>
int fib(int v);
int main()
{
    int i;
    printf("Input A Number For Fibonacci Index\n");
    scanf("%d",&i);
    if(i==0)
    {
        printf("Fibonacci Index 0 Value is 0");
    }
    else
    { 
        printf("Fibonacci Index %d Value is %d\n",i,fib(i));
    }    
}

int fib(int v)
{
   int x = 0,y = 1;
        for (int count = 1; count < v+1; count++)
    {
            y = y+x;
            x = y-x;
    }    
    return (x);
}
