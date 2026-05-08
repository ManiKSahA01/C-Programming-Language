#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    
    if (fptr == NULL) {
        printf("File is not create...\n");
        return;
    }
    char ch[20];
    for (int i = 0; i<2; i++) {
        fscanf(fptr, "%s", ch);
        printf("%s\n", ch);
    }
    fclose(fptr);
    return 0;
}


// Ex 02: int
// int main(){
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");

//     int no;
//     for (int i = 0; i < 4; i++) {
//         fscanf(fptr, "%d", &no); 
//         printf("Number %d = %d\n",i+1, no);
//     }
//     fclose(fptr);
//     return 0;
// }

// int main() {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");   // read mode

//     if (fptr == NULL) {
//         printf("File is not opened!\n");
//         return 1;
//     }
//     char name[50];
//     int age;
//     float cgpa;
//     for (int i =0; i<2; i++) {
//         fscanf(fptr, "%s %d %f", name, &age, &cgpa);

//         printf("\n%d Student information...\n", i + 1);
//         printf("Student name: %s\n", name);
//         printf("Student age: %d\n", age);
//         printf("Student cgpa: %f\n", cgpa);
//     }
//     fclose(fptr);
    
//     return 0;
// }

