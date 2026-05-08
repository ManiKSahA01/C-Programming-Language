#include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("Test.txt", "w");

//     char name[20];
//     for(int i=0; i<2; i++){
//         printf("\n%d Student name...\n",i+1);
//         printf("Enter the name: ");
//         scanf("%s",name);

//         fprintf(fptr, "Name = %s\n", name);
//     }
//     fclose(fptr);
//     return 0;
// }

int main(){
    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int age;
    float s1, s2, s3;

    for(int i=0; i<2; i++){
        printf("\n%d Student information...\n",i+1);
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter age: ");
        scanf("%d", &age);
        printf("Enter cgpa: ");
        scanf("%f", &cgpa);

        fprintf(fptr, "Student name: %s\n", name);
        fprintf(fptr, "Student age: %d\n", age);
        fprintf(fptr, "Student cgpa: %f\n", cgpa);
    }
    fclose(fptr);
    return 0;
}


