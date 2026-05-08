#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Test.txt", "r");

    char ch;
    while (ch!= EOF){
        ch = fgetc(fptr);
        printf("%c", ch);
    }
    // printf("\n");
    fclose(fptr);
    return 0;
}

// int main() {
//     FILE *fptr;
//     fptr = fopen("test.txt", "r");

//     int i =0;
//     char name[50];
//     int age;
//     float cgpa;

//     if (fptr == NULL) {
//         printf("File not found...\n");
//         return 1;
//     }
//     while (fscanf(fptr, "%s %d %f", name, &age, &cgpa) != EOF){
//         printf("\n%d Student information...\n", i + 1);
//         printf("Student name: %s\n", name);
//         printf("Student age: %d\n", age);
//         printf("Student cgpa: %f\n", cgpa);
//         i++;
//     }
//     fclose(fptr);

//     return 0;
// }

