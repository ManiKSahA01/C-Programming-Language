#include<stdio.h>
int main(){
    // float price = 1000.0;
    // float *ptr = &price;
    // float **pptr = &ptr;

    // printf("%f\n", price);
    // printf("%f\n", *ptr);
    // printf("%f\n", **pptr);


    int age;
    int *ptr = &age;
    int **pptr = &ptr;

    printf("Enter your age: ");
    scanf("%d", ptr);  // pointer ka use karke input liya

    printf("You entered: %d\n", **pptr);  // dereference karke value print ki
    return 0;
}
