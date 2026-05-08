#include<stdio.h>
#include<string.h>
/* Write a program to company item shirt and pant 
(color, size, cost) structure in nesteting program.*/
struct item{
    char color[50];
    int size;
    float cost;
};
struct product{
    struct item shirt;
    struct item pant;
};
int main(){
    struct product c;
        printf("\nShirt information...\n");
        printf("Enter the shirt Color: \n");
        scanf("%s",c.shirt.color);

        printf("Enter the shirt size: \n");
        scanf("%d",&c.shirt.size);

        printf("Enter the shirt cost: \n");
        scanf("%f",&c.shirt.cost);

        printf("\nPant information...\n");
        printf("Enter the pant Color: \n");
        scanf("%s",c.pant.color);

        printf("Enter the pant size: \n");
        scanf("%d",&c.pant.size);

        printf("Enter the pant cost: \n");
        scanf("%f",&c.pant.cost);

        printf("\nShirt information...\n");
        printf("shirt color is: %s\n",c.shirt.color);
        printf("shirt size is: %d\n",c.shirt.size);
        printf("shirt cost is: %.2f\n",c.shirt.cost);

        printf("\nPant information...\n");
        printf("pant color is: %s\n", c.pant.color);
        printf("pant size is: %d\n",c.pant.size);
        printf("pant cost is: %.2f\n",c.pant.cost);
    
    return 0;
}