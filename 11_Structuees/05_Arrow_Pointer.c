#include<stdio.h>
#include<string.h>
// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main(){
//     struct student s1 = {"Mani", 4325, 9.2};
//     struct student *ptr = &s1;

//     printf("Student name: %s\n", ptr->name);
//     printf("Student roll: %d\n", ptr->roll);
//     printf("Student cgpa: %f\n", ptr->cgpa);

//     return 0;
// }

struct person{
    char name[50];
    int age;
    float weight;
};
int main(){
    struct person *ptr;

    for (int i=0; i<3; i++){
        printf("\n%d Person information...\n",i+1);
        printf("Enter the nmae: ");
        scanf("%s",ptr->name);
        printf("Enter the age: ");
        scanf("%s",&ptr->age);
        printf("Enter the weight: ");
        scanf("%s",&ptr->weight);
    }
    for(int i=0; i<3; i++){
        printf("\n%d Person information...\n",i+1);
        printf("Name is: %s\n",ptr->name);
        printf("Age is: %d\n",ptr->age);
        printf("weght is: %f\n",ptr->weight);
    }
    return 0;
}

/*Ques : Create a structure ‘person’ having attributes as name, age
and weight. Access its structure variables using pointers.*/
// struct person{
//     char name[50];
//     int age;
//     float weight;
// };
// int main(){
//     struct person *ptr;

//     strcpy(ptr->name, "Mani");
//     ptr -> age = 24;
//     ptr -> weight = 51.50;

//     // ptr ->age =23; // change the value

//     printf("Name is: %s\n",ptr->name);
//     printf("Age is: %d\n",ptr->age);
//     printf("weght is: %f\n",ptr->weight);
    
//     return 0;
// }