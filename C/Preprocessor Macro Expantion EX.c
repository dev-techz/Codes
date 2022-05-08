#include <stdio.h>
#define ISD(y) (y>=48 && y<=57)
#define ISC(ch) (ch >='A' && ch<='Z')

int main()
{
    int no = ISD(49);
    int no1 = ISD(40);
    int no2 = ISD(35);
    int a = ISC('A');
    int b = ISC('b');

    printf("Test = %d",no);
    printf("Test = %d",no1);
    printf("Test = %d",no2);
    printf("Test = %d",a);
    printf("Test = %d",b);


	return 0;
}
