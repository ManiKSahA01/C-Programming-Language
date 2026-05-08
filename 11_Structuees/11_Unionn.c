#include<stdio.h>
#include<string.h>
// union members{ // only one mumbers can be at a time...
//     char name[50];
//     int age;
// }m1;
// int main(){
//     strcpy(m1.name, "Mani");
//     printf("Name is: %s\n",m1.name); 

//     m1.age = 24;
//     printf("Age is: %d\n",m1.age);

//     return 0;
// }
union student{ // only one mumbers can be at a time...
    char name[50];
    int roll;
    float cgpa;
}s1;
int main(){
    for(int i=0; i<1; i++){
        printf("\n%d Student information...\n",i+1);
        printf("Enter the name: ");
        scanf("%s",s1.name);
        printf("Enter the roll: ");
        scanf("%d",&s1.roll);
        printf("Enter the cgpa: ");
        scanf("%f",&s1.cgpa);
    }
    for(int i=0; i<1; i++){
        printf("\n%d Student information...\n",i+1);
        printf("Student name is: %s\n",s1.name);
        printf("Student roll is: %d\n",s1.roll);
        printf("Student cgpa is: %f\n",s1.cgpa);
    }
    
    return 0;
}

