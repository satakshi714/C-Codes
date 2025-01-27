#include <stdio.h>
int main(){ 
    float cost[3], f_cost;
    printf("Enter cost of item1: ");
    scanf("%f",&cost[0]);

    printf("Enter cost of item2: ");
    scanf("%f",&cost[1]);

    printf("Enter cost of item3: ");
    scanf("%f",&cost[2]);

    f_cost = cost[0]+(0.18*cost[0])+cost[1]+
    (0.18*cost[1])+cost[2]+(0.18*cost[2]);
    printf("Final cost is: %f",f_cost);
    return 0;
}