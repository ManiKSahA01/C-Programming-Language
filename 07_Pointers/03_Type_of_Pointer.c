#include<stdio.h>
int main(){ 
// Void Pointer...
    int age = 24;
    int *ptr = &age;

    // value print
    printf("Value of age = %d\n", age);
    printf("Value using pointer = %d\n", *ptr);
    printf("Value is = %d\n", *(&age));
    printf("Address of agr = %p\n", &age);
    printf("Address stored in ptr = %p\n", ptr);

// Null pointer...
    // int *ptr = NULL;

    // if (ptr == NULL) {
    // printf("Pointer is null...\n");
    // } 

// Wild Pointer....
    // int *ptr;   // Wild pointer (uninitialized)
    // printf("Undefined behavior = %d",*ptr);

    return 0;
}
