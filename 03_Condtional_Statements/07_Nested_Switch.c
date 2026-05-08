#include<stdio.h>
int main() {
    int student, cgpa;
    printf("Enter the student number (1 or 2): ");
    scanf("%d", &student);

    printf("Enter CGPA option (1 or 2): ");
    scanf("%d", &cgpa);

    switch(student){
        case 1: printf("Studect name is: Rakesh\n");
        switch(cgpa){
            case 1: printf("Student CGPA is: 9.5\n");
            break;
            default: printf("Invalid number\n");
        }
        break;
        case 2: printf("Student name is Puja\n");
        switch(cgpa){
            case 2: printf("Student cgpa is 8.8\n");
            break;
            default: printf("Invalid number\n");
        }
        break;
        default: printf("Invalid student number\n");
    }

    return 0;
}
