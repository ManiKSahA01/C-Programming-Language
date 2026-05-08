#include<stdio.h>
#include<string.h>
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// }ece[20];
// int main(){
//     printf("Student marks is...\n");

//     ece[0].roll = 3243;
//     ece[0].cgpa = 9.2;
//     strcpy(ece[0].name, "Mani");
    
//     printf("Student name is: %s\n", ece[0].name);
//     printf("Student roll is: %d\n",ece[0].roll);
//     printf("Student cgpa is: %f\n",ece[0].cgpa);

//     return 0;
// }

//Example: 2
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student cse[50];
    for(int i =0; i<3; i++){
        printf("\n%d Student information...\n",i+1);

        printf("Enter the name: \n");
        scanf("%s",cse[i].name);

        printf("Enter the roll: \n");
        scanf("%d",&cse[i].roll);

        printf("Enter the cgpa: \n");
        scanf("%f",&cse[i].cgpa);
    }
    for (int j =0; j<3; j++){
        printf("\n%d Student information...\n",j+1);
        printf("Student name is: %s\n",cse[j].name);
        printf("Student roll is: %d\n",cse[j].roll);
        printf("Student cgpa is: %f\n",cse[j].cgpa);
    }
    return 0;
}

/*Ques : A record contains name of cricketer, his age, number
of test matches that he has played and the average runs that
he has scored in each test match. Create an array of structure
to hold records of 20 such cricketer and then write a program to
read these records*/
// struct marcthes{
//     char name[100];
//     int age;
//     int noOfMarches;
//     float average;
// }arr[100];
// int main(){
//     printf("Cricketer infomation is...");
//     for(int i =0; i<3; i++){
//         printf("\n%d Cricketer information...\n",i+1);

//         printf("Enter the name: \n");
//         scanf("%s",&arr[i].name);

//         printf("Enter the age: \n");
//         scanf("%d",&arr[i].age);

//         printf("Enter the no of marches: \n");
//         scanf("%d",&arr[i].noOfMarches);
        
//         printf("Enter the average: \n");
//         scanf("%f",&arr[i].average);
//     }
//     for (int j =0; j<3; j++){
//         printf("\n%d Marche information...\n",j+1);
//         printf("Name is: %s\n",arr[j].name);
//         printf("Age is: %d\n",arr[j].age);
//         printf("Number of marches is: %d\n",arr[j].noOfMarches);
//         printf("Average is: %f\n",arr[j].average);
//     }
//     return 0;
// }