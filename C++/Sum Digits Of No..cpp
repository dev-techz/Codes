#include <iostream>

using namespace std;

int main()
{
    int no,r,no_save,sum=0;
    cout<<"Enter No. :  ";
    cin>>no;
    no_save=no;
    while (no>0)
    {
       r=no%10;
       sum +=r;
       no/=10;
    }
    cout<<sum<<endl;

    return 0;
}