#include <stdio.h>

int main()
{
 int num,multiple;

    printf("Enter No. Which Of table You Want\n");
    scanf("%d",&num);

    for(multiple=1;multiple<=10;multiple++)
    {
        printf("%d x %d = %d\n",num,multiple,num*multiple);
    }

	return 0;
}
