#include <stdio.h>

int main()
{
	int year;

	printf("Enter the Year\n");
    scanf("%d",&year);

    int remain_year = year-2000;
    int date_till_year = remain_year*365.2425;
    int week_alternate = date_till_year%52;
    int day = week_alternate%7;

    // Sunday = 0,Monday = 1,Tuesday = 2,Wednesday = 3,Thursday = 4,Friday = 5,Saturday = 6;

    if (day==0)
      printf("Day On 01 Jan %d is Sunday\n",year);
    if (day==1)
      printf("Day On 01 Jan %d is Monday\n",year);
    if (day==2)
      printf("Day On 01 Jan %d is Tuesday\n",year);
    if (day==3)
      printf("Day On 01 Jan %d is Wednesday\n",year);
    if (day==4)
      printf("Day On 01 Jan %d is Thursday\n",year);
    if (day==5)
      printf("Day On 01 Jan %d is Friday\n",year);
    if (day==6)
      printf("Day On 01 Jan %d is Saturday\n",year);

	return main();
}

