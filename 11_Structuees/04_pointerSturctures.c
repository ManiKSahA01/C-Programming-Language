#include<stdio.h>
#include<string.h>
// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main(){
//     struct student s1 ={"Mani", 8657, 9.2};
//     struct student *ptr = &s1;

//     printf("Student name: %s\n", (*ptr).name);
//     printf("Student roll: %d\n", (*ptr).roll);
//     printf("Student cgpa: %f\n", (*ptr).cgpa);
//     return 0;
// }

struct person{
    char name[50];
    int age;
    float weight;
};
int main(){
    struct person *s1;
    for (int i=0; i<3; i++){
        printf("\n%d Person information...\n",i+1);
        printf("Enter the nmae: ");
        scanf("%s",(*s1).name);
        printf("Enter the age: ");
        scanf("%s",&(*s1).age);
        printf("Enter the weight: ");
        scanf("%s",&(*s1).weight);
    }
    for(int i=0; i<3; i++){
        printf("\n%d Person information...\n",i+1);
        printf("Name is: %s\n",(*s1).name);
        printf("Age is: %d\n",(*s1).age);
        printf("weght is: %f\n",(*s1).weight);
    }
    return 0;
}