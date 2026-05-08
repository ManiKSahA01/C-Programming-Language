# include<stdio.h>
// Question 01: Fint output
int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; // 0
    
    printf("x = %d\n", x); // 0
    printf("*ptr = %d\n", *ptr); // 0

    *ptr += 5;
    printf("x = %d\n", x); // 5
    printf("*ptr = %d\n", *ptr); // 5

    (*ptr)++;
    printf("x = %d\n", x); // 6
    printf("*ptr = %d\n", *ptr); // 6 
    return 0;
}

// Question 02: Pirnt the value of 'i' from its pointer to pointer.
// int main(){
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;

//     printf("%d\n", **pptr);
//     return 0;
// }

// Question 03: Swap 2 number, a & b.
// void swap(int a, int b);
// void _swap(int *a, int *b);

// int main(){
//     int x = 3, y = 5;
//     // swap(x, y);
//     printf("x = %d & y = %d\n", x, y);

//     _swap(&x, &y);
//     printf("*x = %d & *y = %d\n", x, y);
//     return 0;
// }
// call by value
// void swap(int a, int b){
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d & b = %d\n", a, b);
// }
// // call by referance
// void _swap(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
//     printf("a = %d & b = %d\n", a, b); // print the addres
// }
    
// Question 04: Will the address output be same...

// void printAddress(int n);
// int main(){
//     int n = 4;
//     printAddress(n);
//     printf("Address of n is: %u\n", &n);

//     return 0;
// }
// // call by value
// void printAddress(int n){
//     printf("Address of n is: %u\n", &n);
// }

// Question 05: 
// void doWork(int a, int b, int *sum, int *prod, int *avg);
// int main(){
//     int a = 3, b = 5;
//     int sum, prod, avg;
//     doWork(a, b, &sum, &prod, &avg);

//     printf(" sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
//     return 0;
// }
// void doWork(int a, int b, int *sum, int *prod, int *avg){
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a+b)/2;
// }