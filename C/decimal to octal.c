int main()
{
    int no,rem,tens=1,sum=0,oct;
    printf("Enter No. To Get Octal No.");
    scanf("%d",&no);
    oct=no;
    while(oct>0)
    {
        rem=oct%8; 
        sum=sum+tens*rem;
        oct=oct/8;
        tens=tens*10;
    }
    printf("%d",sum);
}