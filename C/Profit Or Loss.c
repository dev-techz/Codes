#include <stdio.h>

int main()
{
	int cost,selling;
    printf("Enter the Cost Price.\n");
    scanf("%d",&cost);
    printf("Enter the Selling Price.\n");
    scanf("%d",&selling);
    if (cost <= selling)
    {
        int profit = selling-cost;
        printf("you have made profit of %d rs.",profit);
    }
    else
    {
        int loss = cost-selling;
        printf("you have made loss of %d rs.",loss);
    }

	return 0;
}
