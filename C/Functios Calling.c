#include <stdio.h>

int calsum(int x,int y,int z);
int calmul(int x,int y,int z);

int main()
{
    int a,b,c,sum,mul;
    printf("Enter Three No. For Sum & Multiple.\n");
    scanf("%d %d %d",&a,&b,&c);
    sum=calsum(a,b,c);
    mul=calmul(a,b,c);
    printf("Sum = %d\n",sum);
    printf("Muliple = %d\n",mul);
	return 0;
}

int calsum(int x,int y,int z)
{
    int d;
    d=x+y+z;
    return (d);
}

int calmul(int x,int y,int z)
{
    int d;
    d=x*y*z;
    return (d);
}
