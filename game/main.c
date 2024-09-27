#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* char color[20];
    char pluralnoun[20];
    char celebrity[20];
    char celeb2[20];

    printf("Enter a color: ");
    scanf("%s",&color);

    printf("Enter a pluralnoun:");
    scanf("%s",&pluralnoun);

    printf("Who's your favorite celebrity:");
    scanf("%s %s",&celebrity,&celeb2);

    printf("Roses are %s\n",color);
    printf("%s are blue\n",pluralnoun);
    printf("I love %s %s\n",celebrity,celeb2); */
    float paidrate=5.0,sumpaid,paidhours=25;
    sumpaid=paidrate*paidhours;
    printf("Paid sum=$%.2f\n",sumpaid);
    return 0;
}
