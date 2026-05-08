#include<stdio.h>
#include<string.h>
// typedef struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// } student;
// int main(){
//     printf("Student information...\n");
//     student s1;
    
//     strcpy(s1.name, "Mani");
//     s1.roll = 344;
//     s1.cgpa = 9.2;

//     printf("Student name: %s\n", s1.name);
//     printf("Student roll: %d\n", s1.roll);
//     printf("Student cgpa: %f\n", s1.cgpa);

//     return 0;
// }

typedef struct student{
    char name[100];
    int roll;
    float cgpa;
} stu;
int main(){
    stu s1;
    for(int i=0; i<2; i++){
        printf("\n%d Student information...\n",i+1);
        printf("Enter the name: ");
        scanf("%s",s1.name);
        printf("Enter the roll: ");
        scanf("%d",&s1.roll);
        printf("Enter the cgpa: ");
        scanf("%f",&s1.cgpa);
    }
    for(int i=0; i<2; i++){
        printf("\n%d Student information...\n",i+1);
        printf("Student name is: %s\n",s1.name);
        printf("Student roll is: %d\n",s1.roll);
        printf("Student cgpa is: %f\n",s1.cgpa);
    }
    return 0;
}

// typedef char name[100];
// typedef int roll;
// typedef float cgpa;
// int main(){
//     printf("Student information...\n");

//     name a;
//     strcpy(a, "Mani");
//     roll b = 35;
//     cgpa c = 9.2;

//     printf("Student name: %s\n", a);
//     printf("Student roll: %d\n", b);
//     printf("Student cgpa: %f\n", c);
//     return 0;
// }
