#include <stdio.h>
void fun1();
void fun2();
i=23;

int main()
{
    int i=5;
    printf("%d",i);
    fun2();
    fun1();
    printf("%d",i);
    fun2();

	return 0;
}
void fun1()
{
    i = 9;
}
void fun2()
{
    printf("%d",i);
}
