// Program to tell your DOB Year

#include <stdio.h>

int main(void)
{

	int age = 0 , year = 2020; // Creating Variable For Age
	printf("Input Your Age\n");
	scanf("%d", &age); // Taking Input For Variable Values
	int Born = 2020-age;
	printf("You are Born In %d", Born);

return 0;


}