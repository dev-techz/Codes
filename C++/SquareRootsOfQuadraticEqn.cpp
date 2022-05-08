#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,x,y;
    cout<<"Enter Value Of a b c"<<endl;
    cin>>a>>b>>c;
    x = (-b+sqrt(b*b-4*a*c))/(2*a);
    y = (-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<y<<endl;
    cout<<x<<endl;
    return 0;
}