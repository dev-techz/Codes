#include <stdio.h>

int main()
{

	int hardness,tensile_strength;
	float carbon_content;
	printf("Enter Hardness Of Steel\n");
	scanf("%d",&hardness);
	printf("Enter Tensile Strength Of Steel\n");
	scanf("%d",&tensile_strength);
	printf("Enter Carbon Content Of Steel\n");
	scanf("%f",&carbon_content);

    if ((hardness>50)&&(carbon_content<0.7)&&(tensile_strength>5600))
        printf("Steel Is Grade 10");
    else if ((hardness>50)&&(carbon_content<0.7))
        printf("Steel Is Grade 9");
    else if ((carbon_content<0.7)&&(tensile_strength>5600))
        printf("Steel Is Grade 8");
    else if ((hardness>50)&&(tensile_strength>5600))
        printf("Steel Is Grade 7");
    else if ((hardness>50)||(carbon_content<0.7)||(tensile_strength>5600))
        printf("Steel Is Grade 6");
    else
        printf("Steel Is Grade 5");


	return 0;
}
