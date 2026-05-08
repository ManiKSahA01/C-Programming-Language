#include<stdio.h>
#include<string.h>
// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main(){
//     struct student s1;
//     printf("Enter the name: ");
//     scanf("%s",s1.name);
//     printf("Enter the roll: ");
//     scanf("%d",&s1.roll);
//     printf("Enter the cgpa: ");
//     scanf("%f",&s1.cgpa);

//     printf("\n");
//     printf("Name = %s\nRoll No = %d\nCgpa = %f", s1.name, s1.roll, s1.cgpa);
//     return 0;
// }

// struct student{
//     char name[50];
//     int roll;
//     float cgpa;
// }s1;
// int main(){
//     for(int i=0; i<2; i++){
//         printf("\n%d Student information...\n",i+1);
//         printf("Enter the name: ");
//         scanf("%s",s1.name);
//         printf("Enter the roll: ");
//         scanf("%d",&s1.roll);
//         printf("Enter the cgpa: ");
//         scanf("%f",&s1.cgpa);
//     }
//     for(int i=0; i<2; i++){
//         printf("\n%d Student information...\n",i+1);
//         printf("Student name is: %s\n",s1.name);
//         printf("Student roll is: %d\n",s1.roll);
//         printf("Student cgpa is: %f\n",s1.cgpa);
//     }
//     return 0;
// }

/* Write a program to company item shirt and pant 
(color, size, cost) structure program.*/
struct company{
    char color[50];
    int size;
    float cost;
};
int main(){
    struct company shirt, pant;
    for(int i=0; i<2; i++){
        printf("\nShirt information...\n");
        printf("Enter the shirt Color: \n");
        scanf("%s",shirt.color);

        printf("Enter the shirt size: \n");
        scanf("%d",&shirt.size);

        printf("Enter the shirt cost: \n");
        scanf("%f",&shirt.cost);

        printf("\nPant information...\n");
        printf("Enter the pant Color: \n");
        scanf("%s",pant.color);

        printf("Enter the pant size: \n");
        scanf("%d",&pant.size);

        printf("Enter the pant cost: \n");
        scanf("%f",&pant.cost);
    }
    for(int i=0; i<2; i++){
        printf("\nShirt information...\n");
        printf("shirt color is: %s\n", shirt.color);
        printf("shirt size is: %d\n",shirt.size);
        printf("shirt cost is: %f\n",shirt.cost);

        printf("\nPant information...\n");
        printf("pant color is: %s\n", pant.color);
        printf("pant size is: %d\n",pant.size);
        printf("pant cost is: %f\n",pant.cost);
    }
    return 0;
}