#include <stdio.h>
int factorial(int no);
int main()
{
    int no,f;
    printf("Enter The No. For Factorial Output.\n");
    scanf("%d",&no);
    f = factorial(no);
    printf("Factorial Of %d is %d\n",no,f);

	return 0;
}

int factorial(int no)
{
    int count,x,y=no,f;
    count = no;
    for(;count>1;count--)
    {
        x=no*(y-1);
        no=x;
        y--;
    }
    return (no);
}
