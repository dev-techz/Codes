#include <stdio.h>
#include <math.h>


int main()
{
	float x,y; // variable coordinates

	printf("Enter x & y Cordinates\n");
	scanf("%f%f",&x,&y); // taking variable

    float r = sqrt(x*x+y*y); // distance from 0,0
    float fi = atan(y/x); // tan inverse function applying
    float pi = fi*180.0/3.141592; // radian to degree converting

    printf("Polar Co-ordinats are r = %f Angle = %f Degrees",r,pi);

	return 0;
}
