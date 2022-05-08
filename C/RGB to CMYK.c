#include <stdio.h>

int main()
{

    float r,g,b,white,c,m,y,k;

    printf("Enter Red ,Green ,Blue Value followed by space it must be in range of 0-255\n");
    scanf("%f%f%f",&r,&g,&b);
    if ((r>=g) && (r>=b))
        white = r/255;
    else if ((g>=r) && (g>=b))
        white = g/255;
    else if ((b>=g) && (b>=r))
        white = b/255;


    c=(white-(r/255))/white;
    m=(white-(g/255))/white;
    y=(white-(b/255))/white;
    if ((r==0)&&(g==0)&&(b==0))
        k = 1;
    else
        k = (1-white);

    printf("The Cyan = %f\n",c);
    printf("The Magenta = %f\n",m);
    printf("The Yellow = %f\n",y);
    printf("The Black = %f\n",k);

	return 0;
}
