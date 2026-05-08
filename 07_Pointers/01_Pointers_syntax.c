#include<stdio.h>
int main(){
    // int age = 24;
    // int *ptr = &age;
    // int _age = *ptr;

    // printf("%d\n", _age);

    // int a = 24;
    // printf("%d\n", a);

    // int *x = &a;
    // printf("%d\n", *x);
    
    // int **y = &x;
    // printf("%d\n", **y);



    // int age;
    // int *ptr = &age;

    // printf("Enter your age: ");
    // scanf("%d", ptr);  // pointer ka use karke input liya

    // printf("You entered: %d\n", *ptr);  // dereference karke value print ki

// sum of two number...
    int a, b, sum;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *psum = &sum;

    printf("Enter two number: ");
    scanf("%d %d", ptr1, ptr2);

    *psum = *ptr1 + *ptr2;
    printf("Sum = %d\n", *psum);

    return 0;
}

