#include <stdio.h>

int power(int x,int y);

int main()
{
    int no,pow,value;
    printf("Enter No. & Power\n");
    scanf("%d %d",&no,&pow);
    value = power(no,pow);
    printf("Value = %d",value);
	return 0;
}

int power(int x,int y)
{
    int count,z,t=x;
    for(count=1;count<y;count++)
        {
            z=t*x;
            t=z;
            printf("%d\n",z);
        }
    return (z);
}
