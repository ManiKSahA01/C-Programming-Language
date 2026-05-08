#include<stdio.h>
#include<string.h>
// struct student{ // User defined tada types...
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main(){
//     printf("Student marks is:\n");
//     struct student s1;

//     s1.roll = 2342;
//     s1.cgpa = 9.2;
//     strcpy(s1.name, "Mani");

//     printf("Student name is: %s\n", s1.name);
//     printf("Student roll is: %d\n", s1.roll);
//     printf("Student cgpa is: %f\n", s1.cgpa);
//     return 0;
// }

// Input Methord...
struct student{
    char name[100];
    int roll;
    float cgpa;
} s1; // new name structure input....
int main(){
    // struct student s1;
    printf("Enter the name: ");
    scanf("%s",s1.name);
    printf("Enter the roll: ");
    scanf("%d",&s1.roll);
    printf("Enter the cgpa: ");
    scanf("%f",&s1.cgpa);

    printf("\n");
    printf("Student name is: %s\n",s1.name);
    printf("Student roll is: %d\n",s1.roll);
    printf("Student cgpa is: %f\n",s1.cgpa);
    return 0;
}

// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main(){
//     struct student s1 = {"Mani", 574, 9.2};
    
//     printf("Student name is: %s\n", s1.name);
//     printf("Student roll is: %d\n", s1.roll);
//     printf("Student cgpa is: %f\n", s1.cgpa);
    
//     return 0;
// }


