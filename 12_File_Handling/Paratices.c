#include<stdio.h>
// Question 01:
// file opening
// int main(){
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "r"); // "w" create the files...

//     if (fptr == NULL){
//         printf("files doesnt's exist\n");
//     }
//     else{
//         printf("files is the exist\n");
//         fclose(fptr);
//     }
//     return 0;
// }

// Question 02: Make a program to read 5 integers from a file..
// int main(){
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");

//     int n;
//     fscanf(fptr, "%d", &n);
//     printf("1st Number = %d\n", n);

//     fscanf(fptr, "%d", &n);
//     printf("2nd Number = %d\n", n);

//     fscanf(fptr, "%d", &n);
//     printf("3th Number = %d\n", n);

//     fscanf(fptr, "%d", &n);
//     printf("4th Number = %d\n", n);

//     fscanf(fptr, "%d", &n);
//     printf("5th Number = %d\n", n);

//     fclose(fptr);

//     return 0;
// }

// Question 03: Make a program input student information fram a 
//user & enter it to a file..
// int main(){
//     FILE *fptr;
//     fptr = fopen("Student.txt", "w");

//     char name[100];
//     int age;
//     float cgpa;

//     printf("Enter name: ");
//     scanf("%s", name);

//     printf("Enter age: ");
//     scanf("%d", &age);

//     printf("Enter cgpa: ");
//     scanf("%f", &cgpa);

//     fprintf(fptr, "Student name: %s\n", name);
//     fprintf(fptr, "Student age: %d\n", age);
//     fprintf(fptr, "Student cgpa: %f\n", cgpa);

//     fclose(fptr);
//     return 0;
// }

// Question 04: 
// int main(){
//     FILE *fptr;
//     fptr = fopen("Odd.txt", "w");

//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for (int i =1; i<=n; i++){
//         if (i % 2 != 0){
//             fprintf(fptr, "%d\n", i);
//         }
//     }
//     fclose(fptr);

//     return 0;
// }


// Question 05: 
// int main(){
//     FILE *fptr;
//     fptr = fopen("sum.txt", "r");

//     int a;
//     int b;

//     fscanf(fptr, "%d", &a);
//     fscanf(fptr, "%d", &b);

//     fclose(fptr);

//     fptr = fopen("sum.txt", "w");
//     fprintf(fptr, "%d", a + b);

//     fclose(fptr);

//     return 0;
// }

/* Write a program to item shirt and pant 
(color, size, cost) using File Program...*/
// int main(){
//     FILE *fptr;
//     fptr = fopen("Student.txt","w");

//     char colorShirt[50];
//     int sizeShirt;
//     float costShirt;

//     char colorPant[50];
//     int sizePant;
//     float costPant;

//     for(int i=0; i<1; i++){
//         printf("\nShirt information...\n");
//         printf("Enter the shirt Color: \n");
//         scanf("%s",colorShirt);

//         printf("Enter the shirt size: \n");
//         scanf("%d",&sizeShirt);

//         printf("Enter the shirt cost: \n");
//         scanf("%f",&costShirt);

//         printf("\nPant information...\n");
//         printf("Enter the pant Color: \n");
//         scanf("%s",colorPant);

//         printf("Enter the pant size: \n");
//         scanf("%d",&sizePant);

//         printf("Enter the pant cost: \n");
//         scanf("%f",&costPant);

//         fprintf(fptr,"\nShirt information...\n");
//         fprintf(fptr,"shirt color is: %s\n",colorShirt);
//         fprintf(fptr,"shirt size is: %d\n",sizeShirt);
//         fprintf(fptr,"shirt cost is: %.2f\n",costShirt);

//         fprintf(fptr,"\nPant information...\n");
//         fprintf(fptr,"pant color is: %s\n",colorPant);
//         fprintf(fptr,"pant size is: %d\n",sizePant);
//         fprintf(fptr,"pant cost is: %.2f\n",costPant);
//     }
//     fclose(fptr);

//     return 0;
// }

int main(){
    FILE *fptr;
    fptr = fopen("Mani.txt","w");

    char Shirtcolor[50];
    int Shirtsize;
    float Shirtcost;

    char Pantcolor[50];
    int Pantsize;
    float Pantcost;

    for(int i=0; i<1; i++){
        printf("\nShirt information...\n");
        printf("Enter the shirt Color: \n");
        scanf("%s",Shirtcolor);

        printf("Enter the shirt size: \n");
        scanf("%d",&Shirtsize);

        printf("Enter the shirt cost: \n");
        scanf("%f",&Shirtcost);

        printf("\nPant information...\n");
        printf("Enter the pant Color: \n");
        scanf("%s",Pantcolor);

        printf("Enter the pant size: \n");
        scanf("%d",&Pantsize);

        printf("Enter the pant cost: \n");
        scanf("%f",&Pantcost);
    
        fprintf(fptr,"\nShirt information...\n");
        fprintf(fptr,"shirt color is: %s\n", Shirtcolor);
        fprintf(fptr,"shirt size is: %d\n",Shirtsize);
        fprintf(fptr,"shirt cost is: %f\n",Shirtcost);

        fprintf(fptr,"\nPant information...\n");
        fprintf(fptr,"pant color is: %s\n", Pantcolor);
        fprintf(fptr,"pant size is: %d\n",Pantsize);
        fprintf(fptr,"pant cost is: %f\n",Pantcost);
    }
    fclose(fptr);
    
    return 0;
}