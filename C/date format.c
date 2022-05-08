#include <stdio.h>

void  month(int);

char mnth[];

int main()
{
    int d,m,y;
    printf("Enter Date In Form DD-MM-YYYY\n");
    scanf("%d-%d-%d",&d,&m,&y);
    month(m);
    printf("%d %s %d",d,mnth,y);
}

void month(int m)
{
    if (m==1)
    mnth[3]="Jan";
    else if (m==2)
    mnth[3]="Feb";
    else  if (m==3)
    mnth[3]="Mar";
    else  if (m==4)
    mnth[3]="Apr";
    else  if (m==5)
    mnth[3]="May";
    else  if (m==6)
    mnth[3]="Jun";
    else  if (m==7)
    mnth[3]="Jul";
    else  if (m==8)
    mnth[3]="Aug";
    else  if (m==9)
    mnth[3]="Sep";
    else  if (m==10)
    mnth[3]="Oct";
    else  if (m==11)
    mnth[3]="Nov";
    else  if (m==12)
    mnth[3]="Dec";
}