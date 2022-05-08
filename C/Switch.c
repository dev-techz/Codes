#include <stdio.h>

int main()
{
  char i = 'a';

  switch(i)
    {
    case 'a':
        printf("In First One...\n");
    case 'b':
        printf("In Second One...\n");
    case 'c':
        printf("In Third One...\n");
    case 'd':
        printf("In Fourth One...\n");
    default:
        printf("In Default One...\n");
    }

    scanf("%d");

    return 0;
}
