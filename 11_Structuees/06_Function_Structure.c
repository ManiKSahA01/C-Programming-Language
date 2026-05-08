#include<stdio.h>
#include<string.h>
// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// void printInfo(struct student s1); // function prototype
// int main(){
//     struct student s1 ={"Mani", 7647, 9.2};
//     printInfo(s1);

//     // s1.roll = 899;   // change the value...
//     // printf("Student roll: %d\n", s1.roll); 
//     return 0;
// }
// void printInfo(struct student s1){
//     printf("Student name: %s\n", s1.name);
//     printf("Student roll: %d\n", s1.roll);
//     printf("Student cgpa: %f\n", s1.cgpa);
// }

/*Ques : Create a structure to specify data on students with
these attributes: Roll number, Name, Department, Course, Year
of joining. Create 2 structure variables. Now, create a function to
check if two students have the same Department. Pass the two
structure variable as input to this function.*/
struct student{
    char name[50];
    char department[50];
    char course[50];
    int roll;
    int years;
};
int printInfo(struct student s1);
int main(){
    struct student s1;
    for(int i=0; i<2; i++){
        printf("\n%d Student information...\n",i+1);
        printf("Enter the name: ");
        scanf("%s",s1.name);
        printf("Enter the department: ");
        scanf("%s",s1.department);
        printf("Enter the course: ");
        scanf("%s",s1.course);
        printf("Enter the roll: ");
        scanf("%d",&s1.roll);
        printf("Enter the years: ");
        scanf("%d",&s1.years);

        printInfo(s1);
    }
    return 0;
}
int printInfo(struct student s1){
    printf("\nStudent information...\n");
    printf("Student name is: %s\n",s1.name);
    printf("Student department is: %s\n",s1.department);
    printf("Student course is: %s\n",s1.course);
    printf("Student roll is: %d\n",s1.roll);
    printf("Student years is: %d",s1.years);

    printf("\n");

}

