#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    float cost_per_house,cost_with_discount;
    float total_money = 0.0;
    printf("Enter the number of houses for the pest control:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("Enter the cost for %d house for pest control:\n",i + 1);
    scanf("%f",&cost_per_house);
    if(cost_per_house>2200)
    {
    cost_with_discount = cost_per_house - (cost_per_house*0.10);
    }
    else
    {
    cost_with_discount = cost_per_house;
    }
    printf("Total money with discount for pest control of %d house is : %.3f\n",i + 1,cost_with_discount);
    total_money=total_money+cost_with_discount;
    }
    printf("Total money gather from all the houses is : %.3f\n",total_money);

    getch();
}