#include<stdio.h>
/* Ques : Make a function which calculates the
factorial of n using recursion..*/
// int fact(int n);
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);

//     for(int i=1; i<=n; i++){
//         printf("%d\n",fact(i));
//     }
//     return 0;
// }
// int fact(int n){
//     if (n == 0){
//         return 1;
//     }
//     return n * fact(n-1);
// }

// Ques : Write a function to print n terms of the fibonachi sequence.
int fib(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("%d ", fib(n));
    return 0;
}
int fib(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}