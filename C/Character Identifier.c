#include <stdio.h>

int main()
{

	char letter;
	printf("Enter One Character\n");
    scanf("%c",&letter);
    if( (letter<=90) && (letter>=65) )
        printf("The Character is Capital Letter");
    else if( (letter<=122) && (letter>=97) )
        printf("The Character is Small Letter");
     else if( (letter<=57) && (letter>=48) )
        printf("The Character is Digit");
     else if( (letter<=47) && (letter>=0) || (letter<=64) && (letter>=58) || (letter<=96) && (letter>=91) || (letter<=127) && (letter>=123) )
        printf("The Character is Symbol");

	return 0;
}
