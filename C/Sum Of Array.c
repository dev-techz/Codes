/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    //Enter your code here. Read input from STDIN. Print output to STDOUT  
    int size,sum=0;
    printf("Enter Size Of Array\n");
    scanf("%d",&size);
    int *A = (int*)malloc(size * sizeof(int));
    printf("Enter Value Of Element\n");
    for(int i=0; i<size ; i++ )
    {
        scanf("%d",&A[i]);
        sum = sum + A[i];
    }

    printf("%d",sum);
       
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    int arr[num];
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
	for (i = num-1; i >= 0;i--)
		printf("%d ",arr[i]);
    return 0;
}*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char string[30];
    
    for(int i=0;i<30;i++)
    {
    scanf("%c",&string[i]);
    }
    for(int c=0;c<10;c++)
    {
         
        int f=0;
        int value;
        for(int s=0;s<30;s++)
        {
            char str1[1],str2[1];
            str2[0]=c;
            str1[0]=string[s];
            value = strcmp(str1, str2);
            
            if(value==0)
            {
                f=f+1;
            }
            
        }
        printf("%d ",f);
    }
    return 0;
}
