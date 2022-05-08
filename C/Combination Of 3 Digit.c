#include <stdio.h>

int main()
{
  int p=1,q=2,r=3,s,t,u,count1,count2,print;
  for(count1=1;count1<=2;count1++)
  {
    for(count2=1;count2<=3;count2++)
    {
        print=(p*100)+(q*10)+r;
        printf("%d\n",print);
        s=p;
        t=q;
        u=r;
        p=t;
        q=u;
        r=s;
    }
   t=p;
   p=q;
   q=t;
  }
	return 0;
}
