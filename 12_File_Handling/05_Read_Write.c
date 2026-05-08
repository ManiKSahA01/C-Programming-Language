#include <stdio.h>
// r+ files...
   int main() {
    FILE *fptr;
    fptr = fopen("Test.txt", "r+");   // read mode
    if (fptr == NULL) {
        printf("File not create...\n");
        return 1;
    }
    char name[50];
    int age;
    float cgpa;
    for (int i =0; i<1; i++){
        fscanf(fptr, "%s %d %f", name, &age, &cgpa);

        printf("\n%d Student information...\n", i + 1);
        printf("Student name: %s\n", name);
        printf("Student age: %d\n", age);
        printf("Student cgpa: %.2f\n", cgpa);
    }
    fclose(fptr);
    return 0;
}

//w+ files...
// int main(){
//     FILE *fptr;
//     fptr = fopen("Student.txt", "w+");

//     char name[100];
//     int age;
//     float cgpa;

//     for(int i=0; i<1; i++){
//         printf("\n%d Student information...\n",i+1);
//         printf("Enter name: ");
//         scanf("%s", name);
//         printf("Enter age: ");
//         scanf("%d", &age);
//         printf("Enter cgpa: ");
//         scanf("%f", &cgpa);

//         fprintf(fptr, "Student name: %s\n", name);
//         fprintf(fptr, "Student age: %d\n", age);
//         fprintf(fptr, "Student cgpa: %f\n", cgpa);
//     }
//     fclose(fptr);
//     return 0;
// }

// int main(){
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");

//     printf("%c\n", fgetc(fptr));
//     printf("%c\n", fgetc(fptr));
//     printf("%c\n", fgetc(fptr));
//     printf("%c\n", fgetc(fptr));
//     printf("%c\n", fgetc(fptr));

//     fclose(fptr);

//     return 0;
// }

// Write
// int main(){
//     FILE *fptr;
//     fptr = fopen("Test.txt", "w");

//     fputc('M', fptr);
//     fputc('a', fptr);
//     fputc('n', fptr);
//     fputc('g', fptr);
//     fputc('o', fptr);

//     fclose(fptr);
//     return 0;
// }
