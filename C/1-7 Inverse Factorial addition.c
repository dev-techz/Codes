#include <stdio.h>

int main()
{
    int num,count,x,y,in;
    float ratio,sum,p,q=0.0,conversion1,conversion2;

    for(in=1;in<=7;in++)
    {
        //Factorial
        for(num=in,count=num;count>=2;count--)
    {
        y=num;
        x = y*(count-1);
        num = x;
    } printf("%d %d \n",in,num);
    // Data Type Conversion Int to Float
    conversion1 = num/1.0;
    conversion2 = in/1.0;

    ratio = conversion2/conversion1;
    p=ratio;
    sum=q+p;
    q=sum;

    }
    printf("Ans Is .. %f",sum);
	return 0;
}
