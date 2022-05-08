#include <stdio.h>

int main()
{
	int a=1189,b=841; // Dimensions Of A0
    printf("A0 Dimensions are %d mm x %d mm.\n",a,b);
    int c=b,d=a/2;
    printf("A1 Dimensions are %d mm x %d mm.\n",c,d);
    int e=d,f=c/2;
    printf("A2 Dimensions are %d mm x %d mm.\n",e,f);
    int g=f,h=e/2;
    printf("A3 Dimensions are %d mm x %d mm.\n",g,h);
    int i=h,j=g/2;
    printf("A4 Dimensions are %d mm x %d mm.\n",i,j);
    int k=j,l=i/2;
    printf("A5 Dimensions are %d mm x %d mm.\n",k,l);
    int m=l,n=k/2;
    printf("A6 Dimensions are %d mm x %d mm.\n",m,n);
    int o=n,p=m/2;
    printf("A7 Dimensions are %d mm x %d mm.\n",o,p);
    int q=p,r=o/2;
    printf("A8 Dimensions are %d mm x %d mm.\n",q,r);
}
